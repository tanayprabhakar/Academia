class Book:
    def __init__(self, title, author, pages):
        self.title = title
        self.author = author
        self.pages = pages
    def printtitle(self):
        return self.title
    def settitle(self, newtitle):
        self.title = newtitle
    def printauthor(self):
        return self.author
    def setauthor(self,newauthor):
        self.author =newauthor
    def printpages(self):
        return self.pages
    def setpages(self, newpages):
        self.pages = newpages

book = Book("Python Programming", "John Doe", 300)
print("Title:", book.printtitle())
print("Author:", book.printauthor())
print("Number of Pages:", book.printpages())

book.settitle("Advanced Python Programming")
book.setauthor("Jane Smith")
book.setpages(400)

print("Updated Title:", book.printtitle())
print("Updated Author:", book.printauthor())
print("Updated Number of Pages:", book.printpages())