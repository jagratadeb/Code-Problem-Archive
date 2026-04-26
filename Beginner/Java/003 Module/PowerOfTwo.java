// Question 2: Check Power of 2
// Write a program to check whether an entered number is a power of 2.
// Print "Yes" if it is a power of 2, otherwise print "No".

// Example:
// Input: 8
// Output: Yes

// Input: 10
// Output: No

import java.util.Scanner;

class PowerOfTwo {
    // Main logic: for positive numbers, power of 2 means (number & (number - 1)) == 0.
    static boolean checkPowerOfTwo(int number) {
        return number > 0 && ((number & (number - 1)) == 0);
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int number = sc.nextInt();

            if (checkPowerOfTwo(number)) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}
