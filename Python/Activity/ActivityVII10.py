
with open('random_binary.bin', 'rb') as inputfile:
    bytestring = inputfile.read()
    bytestringsize = len(bytestring)
    middleposition = bytestringsize // 2
    inputfile.seek(middleposition)
    bytestringfrommiddle = inputfile.read()
with open("ActivityVII10.bin", 'wb') as outputfile:
    outputfile.write(bytestringfrommiddle)