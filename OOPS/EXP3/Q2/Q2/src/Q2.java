public class Q2 {
    public static void main(String[] args) {
        System.out.println("Sum of Digits of 12345: " + sumOfDigits(12345));
    }
    public static int sumOfDigits(int number) {
        int sum = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }
}
