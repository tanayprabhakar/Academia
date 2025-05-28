

// File: Circle.java
public class Circle extends MathConstants {
    public void calculateArea(double radius) {
        double area = PI * radius * radius;
        System.out.println("Area of circle with radius " + radius + " is: " + area);
    }
    
    // Cannot override displayPI() because it's final
    // public void displayPI() {  // This would cause a compilation error
    //     System.out.println("Attempting to override final method");
    // }
    
    public static void main(String[] args) {
        Circle circle = new Circle();
        
        // Using the inherited final variable
        System.out.println("Inherited PI value: " + circle.PI);
        
        // Cannot modify PI because it's final
        // circle.PI = 3.14;  // This would cause a compilation error
        
        // Using the inherited final method
        circle.displayPI();
        
        // Calculate area of a circle with radius 5
        circle.calculateArea(5.0);
    }
}