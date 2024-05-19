n=int(input("Enter the value of n: "))
movie={}
for i in range(n):
    movie[i]={
        "Name":input("Name of the movie: "),
        "Year":int(input("Year of the movie: ")),
        "Director":input("Director of the movie: "),
        "Production Cost":int(input("Enter Production Cost: ")),
        "Earning":int(input("Enter Earning: "))
    }
print("Details of all movie:")
for i in range(n):
    print(movie[i]["Name"])
    print("\t",movie[i]["Year"])
    print("\t",movie[i]["Director"])
    print("\t",movie[i]["Production Cost"])
    print("\t",movie[i]["Earning"])
print("\nMovies released before 2015:")
for i in range(n):
    if(movie[i]["Year"]<2015):
        print(movie[i]["Name"])
print("Movies that made a profit:\n")
for i in range(n):
    if(movie[i]["Collection"]>movie[i]["Budget"]):
        print(movie[i]["name"])

print("Movies by a particular director:\n")
dir=input("Enter name of the particular director")
for i in range(n):
    if(movie[i]["Director"]==dir):
        print(movie[i]["name"])