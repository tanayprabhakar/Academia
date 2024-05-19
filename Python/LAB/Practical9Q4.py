class Animal:
    def speak(self):
        print("This is the generic sound of an animal.")
class Dog(Animal):
    def speak(self):
        print("Woof! Woof!")
class Cat(Animal):
    def speak(self):
        print("Meow! Meow!")
animal = Animal()
animal.speak()
dog = Dog()
dog.speak()
cat = Cat()
cat.speak()