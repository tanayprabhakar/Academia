num1 <- as.numeric(readline("Enter first number: "))
num2 <- as.numeric(readline("Enter second number: "))
num3 <- as.numeric(readline("Enter third number: "))
if (num1 >= num2 && num1 >= num3) {
  greatest <- num1
} else if (num2 >= num1 && num2 >= num3) {
  greatest <- num2
} else {
  greatest <- num3
}
cat("The greatest number is:", greatest)
