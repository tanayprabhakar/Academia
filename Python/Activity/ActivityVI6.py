def print_info(**args):
    for key, value in args.items():
        print(key,":",value)
print_info(name="Tanay", age=19, city="Patna")