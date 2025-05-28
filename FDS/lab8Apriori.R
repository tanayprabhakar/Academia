# Sample transactions
sample_transactions <- list(
  c("bread", "milk"),
  c("bread", "diaper", "beer", "eggs"),
  c("milk", "diaper", "beer", "cola"),
  c("bread", "milk", "diaper", "beer"),
  c("bread", "milk", "diaper", "cola")
)

# Count support for an itemset
count_support <- function(itemset, transactions) {
  count <- 0
  for (t in transactions) {
    if (all(itemset %in% t)) {
      count <- count + 1
    }
  }
  return(count)
}

# Generate candidate k-itemsets from frequent (k-1)-itemsets
generate_candidates <- function(frequent_sets, k) {
  candidates <- list()
  n <- length(frequent_sets)
  for (i in seq_len(n-1)) {
    f1 <- sort(frequent_sets[[i]])
    for (j in (i+1):n) {
      f2 <- sort(frequent_sets[[j]])
      # for k=2, join any two; otherwise only if first k-2 match
      if (k == 2 || all(f1[1:(k-2)] == f2[1:(k-2)])) {
        cand <- sort(unique(c(f1, f2)))
        if (length(cand) == k) {
          # prune: all (k-1)-subsets must be frequent
          subs <- combn(cand, k-1, simplify = FALSE)
          ok <- all(sapply(subs, function(s) {
            any(sapply(frequent_sets, function(x) setequal(x, s)))
          }))
          if (ok) {
            candidates[[length(candidates) + 1]] <- cand
          }
        }
      }
    }
  }
  cat(sprintf("  [DEBUG] candidates(%d) generated: %d\n", k, length(candidates)))
  return(candidates)
}

# Apriori algorithm
apriori <- function(transactions, min_support, max_length = 10) {
  all_items <- sort(unique(unlist(transactions)))
  n_transactions <- length(transactions)
  all_frequent_itemsets <- list()
  
  # 1-itemsets
  freq1 <- list()
  for (item in all_items) {
    sup <- count_support(c(item), transactions) / n_transactions
    cat(sprintf("Support of {%-6s}: %.3f\n", item, sup))
    if (sup >= min_support) {
      freq1[[length(freq1) + 1]] <- c(item)
    }
  }
  all_frequent_itemsets[[1]] <- freq1
  
  # k-itemsets for k >= 2
  k <- 2
  while (length(all_frequent_itemsets[[k-1]]) > 0 && k <= max_length) {
    candidates <- generate_candidates(all_frequent_itemsets[[k-1]], k)
    freqk <- list()
    for (cand in candidates) {
      sup <- count_support(cand, transactions) / n_transactions
      cat(sprintf("Support of {%s}: %.3f\n",
                  paste(cand, collapse = ", "), sup))
      if (sup >= min_support) {
        freqk[[length(freqk) + 1]] <- cand
      }
    }
    all_frequent_itemsets[[k]] <- freqk
    k <- k + 1
  }
  
  # flatten with supports
  result <- list()
  for (level in seq_along(all_frequent_itemsets)) {
    for (iset in all_frequent_itemsets[[level]]) {
      sup <- count_support(iset, transactions) / n_transactions
      result[[length(result) + 1]] <- list(items = iset, support = sup)
    }
  }
  return(result)
}

# Generate all association rules from frequent itemsets
generate_all_rules <- function(frequent_itemsets) {
  cat(sprintf(
    ">>> generate_all_rules: total itemsets = %d; size ≥2 = %d\n",
    length(frequent_itemsets),
    sum(sapply(frequent_itemsets, function(x) length(x$items) >= 2))
  ))
  
  rules <- list()
  for (fi in frequent_itemsets) {
    items <- fi$items
    supp  <- fi$support
    if (length(items) < 2) next
    
    # all possible splits antecedent/consequent
    for (r in 1:(length(items)-1)) {
      ant_combos <- combn(items, r, simplify = FALSE)
      for (ant in ant_combos) {
        cons <- setdiff(items, ant)
        # look up support for antecedent
        ant_sup <- NULL
        for (f2 in frequent_itemsets) {
          if (length(f2$items)==length(ant) &&
              all(sort(f2$items)==sort(ant))) {
            ant_sup <- f2$support
            break
          }
        }
        if (is.null(ant_sup)) next
        # look up support for consequent
        cons_sup <- NULL
        for (f2 in frequent_itemsets) {
          if (length(f2$items)==length(cons) &&
              all(sort(f2$items)==sort(cons))) {
            cons_sup <- f2$support
            break
          }
        }
        
        conf <- supp / ant_sup
        lift <- if (!is.null(cons_sup)) conf / cons_sup else NA
        
        rules[[length(rules) + 1]] <- list(
          antecedent = ant,
          consequent = cons,
          support    = supp,
          confidence = conf,
          lift       = lift
        )
      }
    }
  }
  return(rules)
}

# -------------------------------
# Main execution
# -------------------------------
min_support <- 0.4
frequents    <- apriori(sample_transactions, min_support)

cat("\nFrequent Itemsets Found:\n")
for (fi in frequents) {
  cat(sprintf("  {%s}  (Support = %.3f)\n",
              paste(fi$items, collapse=", "), fi$support))
}

# Generate and print rules
rules <- generate_all_rules(frequents)
cat("\nAll Association Rules:\n")
if (length(rules) == 0) {
  cat("  ✗ no rules generated—check debug output above!\n")
} else {
  for (i in seq_along(rules)) {
    r <- rules[[i]]
    cat(sprintf("Rule %2d: {%s} ⇒ {%s}  (sup=%.2f, conf=%.2f, lift=%.2f)\n",
                i,
                paste(r$antecedent, collapse=", "),
                paste(r$consequent, collapse=", "),
                r$support, r$confidence,
                ifelse(is.na(r$lift), NA, r$lift)))
  }
}

# Filter by confidence thresholds
for (th in c(0.8, 0.7, 0.6, 0.5)) {
  cat(sprintf("\nRules with confidence ≥ %.1f:\n", th))
  filt <- Filter(function(x) x$confidence >= th, rules)
  if (length(filt) == 0) {
    cat("  (none)\n")
  } else {
    for (i in seq_along(filt)) {
      r <- filt[[i]]
      cat(sprintf("  {%s} ⇒ {%s}  (conf=%.2f, sup=%.2f, lift=%.2f)\n",
                  paste(r$antecedent, collapse=", "),
                  paste(r$consequent, collapse=", "),
                  r$confidence, r$support,
                  ifelse(is.na(r$lift), NA, r$lift)))
    }
  }
}

cat("\nSummary:\n")
cat("  Total transactions:     ", length(sample_transactions), "\n")
cat("  Total frequent sets:    ", length(frequents), "\n")
cat("  Total association rules:", length(rules), "\n")

