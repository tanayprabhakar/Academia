is_prime <- function(n) {
  if (n <= 1) return(FALSE)
  if (n == 2) return(TRUE)
  if (n %% 2 == 0) return(FALSE)
  
  for (i in 3:sqrt(n)) {
    if (n %% i == 0) return(FALSE)
  }
  return(TRUE)
}

analyze_numbers <- function(numbers) {
  even_count <- 0
  odd_count <- 0
  prime_count <- 0
  sum <- 0
  
  for (num in numbers) {
    if (num %% 2 == 0) {
      even_count <- even_count + 1
      cat(num, "is even\n")
    } else {
      odd_count <- odd_count + 1
      cat(num, "is odd\n")
    }
    
    if (is_prime(num)) {
      prime_count <- prime_count + 1
      cat(num, "is prime\n")
    }
    
    sum <- sum + num
  }
  
  factorial <- 1
  i <- prime_count
  while (i > 0) {
    factorial <- factorial * i
    i <- i - 1
  }
  
  return(list(
    total_numbers = length(numbers),
    even_numbers = even_count,
    odd_numbers = odd_count,
    prime_numbers = prime_count,
    average = sum/length(numbers),
    prime_count_factorial = factorial
  ))
}
numbers <- c(2, 3, 4, 5, 6, 7, 8, 9, 10, 11)
result <- analyze_numbers(numbers)

cat("\nFinal Analysis:\n")
for (name in names(result)) {
  cat(sprintf("%s: %s\n", gsub("_", " ", name), result[[name]]))
}