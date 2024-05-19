def readfile(filename):
    try:
        with open(filename, 'r') as file:
            data = file.read()
            print("File content:",data)
    except FileNotFoundError:
        print("Error: File",filename,"not found.")
readfile('names.txt')
readfile('abc.txt')