#Write a function concatenate that takes a variable number of strings as input and returns a single string that is the concatenation of all the input strings.
def concat(*args):
    l=len(args)
    concatstring=''
    for i in range(l):
        concatstring=concatstring+args[i]
    return concatstring
print(concat("hello"," ","world"))
print(concat("hello"," ","world","tanay"))