Default=open("/home/tanay/codes/python/Activity/FileHandel.txt","r+")
content=Default.read(10)
print(content)
print(Default.readline())
Default.write("East or west Kl Rahul is the best")
lines=["\nBoys and girls of Don Bosco\n","Gathered at this hour\n"]
Default.writelines(lines)
print(Default.tell())
Default.seek(212)
Default.write("this os")
Default.close()