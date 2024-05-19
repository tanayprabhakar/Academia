# Define the file path and the new byte string
file_path = 'example.txt'
with open("random_binary.bin", 'r+b') as file:
    file_content = file.read()
    middle_index = len(file_content) // 2
    file.seek(middle_index)
    file.write("random_binary.bin")
