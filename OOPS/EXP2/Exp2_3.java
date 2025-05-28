public class Exp2_3 {
    public static void main(String[] args) {
        int num1 = Integer.parseInt(args[0]);
        int num2 = Integer.parseInt(args[2]);
        String operator = args[1];
        calc(num1, num2, operator);
    }
    static void calc(int num1, int num2, String operator){
        int result = 0;
        String operation = "";
        switch (operator) {
            case "+":
                result = num1 + num2;
                operation = "Sum";
                break;
            case "-":
                result = num1 - num2;
                operation = "Difference";
                break;
            case "*":
                result = num1 * num2;
                operation = "Product";
                break;
            default:
                System.out.println("Invalid operator. Use +, -, or *.");
                return;
        }
        System.out.println(operation + " of " + num1 + " and " + num2 + " is " + result);
    }
    
}
