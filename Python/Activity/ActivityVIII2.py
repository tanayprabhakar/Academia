def evensum(input_list):
    try:
        sum=0
        for num in input_list:
            if(type(num)!=int and type(num)!=float):
                raise TypeError
            if num%2==0:
                sum+=num
        return sum
    except TypeError:
        return None
numbers = [1, 2, 3, 4, 5, 6]
result = evensum(numbers)
print(result)
numbers = [1, 2, 3, 4, "e", 6]
result = evensum(numbers)
print(result)
