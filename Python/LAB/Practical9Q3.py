class Parent:
    def parent_method(self):
        print("This is a method in the parent class.")

class Child(Parent):
    def child_method(self):
        print("This is a method in the child class.")
child_obj = Child()
child_obj.parent_method()
child_obj.child_method()
