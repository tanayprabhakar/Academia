num1 <- as.numeric(readline(prompt = "Enter the first number: "))
num2 <- as.numeric(readline(prompt = "Enter the second number: "))
num3 <- as.numeric(readline(prompt = "Enter the third number: "))
if (num1 > num2) {
  if (num1 > num3) {
    greatest <- num1
  } else {
    greatest <- num3
  }
} else {
  if (num2 > num3) {
    greatest <- num2
  } else {
    greatest <- num3
  }
}
cat("The greatest number is:", greatest, "\n")
