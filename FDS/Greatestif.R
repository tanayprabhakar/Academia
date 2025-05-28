num1 <- as.numeric(readline(prompt = "Enter the first number: "))
num2 <- as.numeric(readline(prompt = "Enter the second number: "))
num3 <- as.numeric(readline(prompt = "Enter the third number: "))
greatest <- num1
if (num2 > greatest) {
  greatest <- num2
}
if (num3 > greatest) {
  greatest <- num3
}
cat("The greatest number is:", greatest, "\n")
