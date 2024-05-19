with open("random_binary.bin", 'rb') as inputfile:
    bytestring = inputfile.read()
    reversedbytestring = bytestring[::-1]
with open("ActivityVII11.bin", 'wb') as outputfile:
    outputfile.write(reversedbytestring)