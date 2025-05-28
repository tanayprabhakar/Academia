public class Q3 {
    public static void main(String[] args) {
        System.out.print("Fibonacci Series for first 10 terms: ");
        printFibonacci(10);
    }
    public static void printFibonacci(int n) {
        int a = 0, b = 1;
        for (int i = 1; i <= n; i++) {
            System.out.print(a + " ");
            int sum = a + b;
            a = b;
            b = sum;
            }
        System.out.println();
    }
}
