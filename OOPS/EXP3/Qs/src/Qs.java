public class Qs{
    public static void main(String[] args) {                
        
        System.out.println("Number of Primes between 1 and 1000: " + countPrimes());
        
        int[] arr = {2, 3, 2, 5, 2, 6};
        System.out.println("Occurrences of 2 in array: " + countOccurrences(arr, 2));

        int[] array = {10, 5, 8, 20, 3, 15};
        System.out.println("Second Largest Element: " + findSecondLargest(array));
        
        System.out.println("Pattern:");
        printPattern(4);

        int[] originalArray = {1, 2, 3, 4, 5};
        int[] copiedArray = copyArray(originalArray);
        System.out.println("Copied Array:");
        printArray(copiedArray);

        int[] missingNumArray = {1, 5, 6, 2, 4};
        int missingNumber = findMissingNumber(missingNumArray);
        System.out.println("Missing Number: " + missingNumber);

        int[] rotatedArray = rotateArray(originalArray, 2);
        System.out.println("Rotated Array:");
        printArray(rotatedArray);
    }


    public static int countPrimes() {
        int count = 0;
        for (int num = 2; num <= 1000; num++) {
            if (isPrime(num)) {
                count++;
            }
        }
        return count;
    }

    private static boolean isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    public static int countOccurrences(int[] arr, int target) {
        int count = 0;
        for (int num : arr) {
            if (num == target) {
                count++;
            }
        }
        return count;
    }

    public static int findSecondLargest(int[] arr) {
        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;
        
        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }
        
        return secondLargest;
    }

    public static void printPattern(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i * 2 - 1; j++) {
                if (i % 2 == 1) {
                    System.out.print("? ");
                } else {
                    System.out.print("# ");
                }
            }
            System.out.println();
        }
    }

    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static int[] copyArray(int[] Arr) {
        int[] newArr = new int[Arr.length];
        for (int i = 0; i < Arr.length; i++) {
            newArr[i] = Arr[i];
        }
        return newArr;
    }

    public static int findMissingNumber(int[] arr) {
        int n = arr.length + 1;
        int sum = (n * (n + 1)) / 2;
        int actualSum = 0;
        
        for (int num : arr) {
            actualSum += num;
        }
        
        return sum - actualSum;
    }

    public static int[] rotateArray(int[] arr, int k) {
        int n = arr.length;
        k = k % n;
        int[] rotatedArray = new int[n];
        
        for (int i = 0; i < n; i++) {
            rotatedArray[i] = arr[(n - k + i) % n];
        }
        
        return rotatedArray;
    }
}