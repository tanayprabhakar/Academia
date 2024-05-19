print("Truth table for bitwise operators:")
print("-" * 40)
print("|  A  |  B  | AND | OR  | XOR |")
print("-" * 40)

for a in range(2):
   for b in range(2):
       print("| ", a," | ",b," | ",a & b," | ",a | b," | ",a ^ b," | ")

print("-" * 40)