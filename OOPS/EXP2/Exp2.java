public class Exp2 {
    public static void main(String[] args) {
        double triangle = area(2,3);
        System.out.println("Area of the triange: "+ triangle);
        System.out.println("Simple Interest: " + simpleInterest(3, 2, 5));
        signum(0);
        System.out.println("Greatest between 2,3,4: "+greatest(2, 3, 4));
        dayOfWeek(5);
        grade(90, 99, 100);
        
    }
    static double area(double base, double height){
        
        return 0.5*base*height;
    }
    static double simpleInterest(double p, double r, double t){
        return (p*r*t)/100;
    }
    static void signum(int number){
        if (number > 0) {
            System.out.println("The number is positive.");
        } else if (number < 0) {
            System.out.println("The number is negative.");
        } else {
            System.out.println("The number is zero.");
        }
    }
    static int greatest(int num1,int num2,int num3){
        int highest;
        if (num1 >= num2) {
            if (num1 >= num3) {
                highest = num1;
            } else {
                highest = num3;
            }
        } else {
            if (num2 >= num3) {
                highest = num2;
            } else {
                highest = num3;
            }
        }
        return highest;
    }
    static void dayOfWeek(int day){
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Invalid input. Please enter a number between 1 and 7.");
        }
    }
    static void grade (int sub1, int sub2, int sub3){
        double average = (sub1 + sub2 + sub3) / 3.0;
        char grade;
        if (average >= 90) {
            grade = 'A';
        } else if (average >= 75) {
            grade = 'B';
        } else if (average >= 50) {
            grade = 'C';
        } else {
            grade = 'F';
        }
        System.out.println("Final Grade: " + grade);
    }
}
