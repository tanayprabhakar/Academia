#1
number = int(input("Enter an integer: "))

if number < 1:
    print("Invalid input: Please enter a positive integer.")
else:
    divisors_sum = 1

    for i in range(2, int(number*0.5) + 1):
        if number % i == 0:
            divisors_sum += i
            if i != number // i:  
                 divisors_sum += number // i

    if divisors_sum == number:
        print(number,"is a Perfect Number.")
    elif divisors_sum > number:
        print(number,"is an Abundant Number.")
    elif divisors_sum < number:
        print(number,"is a Deficient Number.")

    if number > 1:
        is_prime = True
        for i in range(2, int(number**0.5) + 1):
            if (number % i) == 0:
                is_prime = False
                break

        if is_prime:
            print(number,"is a Prime Number.")
        else:
            print(number,"is a Composite Number.")
    else:
        print(number,"is neither prime nor composite.")


#3
for i in range(1, 101):
    if (i % 3 == 0 and i % 5 == 0):
        print("FizzBuzz")
    elif (i % 3 == 0):
        print("Fizz")
    elif (i % 5 == 0):
        print("Buzz")
    elif (i > 1):
        is_prime = True
        for j in range(2, int(i*0.5) + 1):
            if i % j == 0:
                is_prime = False
                break
        if is_prime:
            print("Prime")
        else:
            print(i)
    else:
        print(i)


#4
fact=1
for i in range(1,6):
    fact*=i
print(fact)

#5
n=int(input("Enter n: "))
for i in range(n+1):
    if(i%2==0):
        print(i)


#6
lista=[1,2,3,4,5,6,7,8,9,10]
i=0
while(i!=10):
    if(lista[i]%2!=0):
        print(lista[i])
    i+=1

    

#7
a=10
for i in range(10):
    print(a,'^',i,'=',a**i)

#8
for i in range(1,6):
    for j in range(0,i):
        print(i,end='')
    print()

#9
string="Good Morning India."
for i in string:
    if(i==' '):
        print('$',end='')
    else:
        print(i, end='')
print()

#10
string='''IF I WERE YOU
AND YOU WERE ME
I WOULD SAY GOODBYE
TURN AROUND AND LEAVE
I WOULD DO IT ALL SO DIFFRENTLY
IF I WERE YOU AND YOU WERE ME'''
for i in string:
    if (i==' '):
        print()
    else:
        print(i,end='')
