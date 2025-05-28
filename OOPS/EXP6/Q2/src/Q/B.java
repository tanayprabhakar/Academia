package Q;

import p.A;

public class B extends A {  // Extending A to access protected members
    public static void main(String[] args) {
        A objectA = new A();
        objectA.publicMethod();  // Can access public method directly
        
        // Demonstrating protected access through inheritance
        B objectB = new B();
        objectB.protectedMethod();  // Can access protected method through inheritance
        
        // Cannot access default method from different package
        // objectA.defaultMethod();  // This would cause a compilation error
        
        // Cannot access private method from different class
        // objectA.privateMethod();  // This would cause a compilation error
        
        System.out.println("Note: Default and private methods cannot be accessed from outside their package and class respectively");
    }
}