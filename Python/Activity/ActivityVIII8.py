def cpyfile(srcfile, desfile):
    try:
        with open(srcfile, 'r') as source, open(desfile, 'w') as destination:
            contents = source.read()
            destination.write(contents)
        print("File ",srcfile," copied to ",desfile," successfully.")
    except IOError:
        print("Error File.")
srcfile = input("Enter the source file name: ")
desfile = input("Enter the destination file name: ")
cpyfile(srcfile, desfile)
