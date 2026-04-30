// Write a program to check if a number is a palindrome or not and print "TRUE" if it is palindrome and "FALSE" if it is not.

import java.util.Scanner;

public class NumberPalindrome {
    static int rev(int n) {
        int revN = 0;
        while (n > 0) {
            revN *= 10;
            int digit = n % 10;
            revN += digit;
            n /= 10;
        }
        return revN;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();

            if (n == rev(n)) {
                System.out.println("TRUE");
            } else {
                System.out.println("FALSE");
            }
        }
    }
}