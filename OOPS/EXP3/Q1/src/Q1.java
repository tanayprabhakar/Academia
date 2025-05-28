public class Q1 {
    public static void main(String[] args) {
        System.out.println("Sum of Integers Divisible by 6 and 9 from 10 to 950: " + sumDivisibleBy6And9());
    }

    public static int sumDivisibleBy6And9() {
        int sum = 0;
        for (int i = 10; i <= 950; i++) {
            if (i % 6 == 0 && i % 9 == 0) {
                sum += i;
            }
        }
        return sum;
    }
}
