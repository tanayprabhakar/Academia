with open('ActivityVII8.txt', 'r') as file:
    line_count = 0  
    line = file.readline()
    while (line != ''):
        line_count += 1
        line = file.readline()
    print("Total number of lines:", line_count)