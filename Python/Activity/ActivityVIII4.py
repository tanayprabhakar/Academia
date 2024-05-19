def countvowel(inpstr):
    try:
        vowel_count=0
        if type(inpstr)!=str:
            raise ValueError("Input must be a valid string")
        inpstr = inpstr.lower()
        for char in inpstr: 
            if char in 'aeiou':
                vowel_count+=1
        return vowel_count
    except ValueError as e:
        print(e)
        return None
inpstr = "Hello, how are you?"
result = countvowel(inpstr)
print(result)