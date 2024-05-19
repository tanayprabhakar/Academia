import os
import random

# Define the file path and size of the binary file
file_path = 'random_binary.bin'
file_size = 1024  # Size in bytes (1 KB)

# Generate random binary data
random_data = bytes(random.randint(0, 255) for _ in range(file_size))

try:
    # Write the random binary data to a file
    with open(file_path, 'wb') as file:
        file.write(random_data)
    
    print(f"Random binary file '{file_path}' created successfully.")

except Exception as e:
    print(f"An error occurred: {e}")
