 #Global variable
global_message = "This is a global message"

def greet():
    #Local variable
    local_message = "Greetings from inside the function!"
    print(local_message)
    print(global_message)
print(global_message)  
greet()  
print(local_message)
