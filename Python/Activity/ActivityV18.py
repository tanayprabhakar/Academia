def display_info(name, **info):
    print("Person's Name:", name)
    print("Personal Information:")
    for key, value in info.items():
        print(key,":",value)

display_info("Tanay", age=18, profession="Engineer", location="Dehradun")
