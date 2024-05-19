class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species

    def makesound(self):
        raise NotImplementedError("Subclass must implement abstract method")


class Dog(Animal):
    def __init__(self, name, species, breed):
        self.name = name
        self.species = species
        self.breed = breed

    def makesound(self):
        print("Woof!")

    def fetch(self):
        print(f"{self.name} fetches the ball.")
dog = Dog("Buddy", "Canine", "Labrador Retriever")
print(dog.name, "is a", dog.breed, dog.species,".")
dog.makesound()
dog.fetch()
