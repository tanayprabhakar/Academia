def countwords(filename):
    try:
        with open(filename, 'r') as file:
            content = file.read()
            word_count = len(content.split())
            return word_count
    except FileNotFoundError:
        print("Error: File ",filename,"not found.")
        return None
filename = 'sample.txt'
result = countwords(filename)
if result is not None:
    print("Number of words in ",filename,":",result)
