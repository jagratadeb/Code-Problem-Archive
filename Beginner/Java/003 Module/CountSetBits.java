
// Question 1: Count Set Bits
// Write a program to count and print the number of set bits in an entered number.
// Set bits are the count of 1s in the binary representation of that number.

// Example:
// Input: 10
// Binary: 1010
// Output: 2

// Input: 7
// Binary: 111
// Output: 3

import java.util.Scanner;

class CountSetBits
{
    // Main logic: repeatedly take (number & 1) to count set bits, then right-shift.
    static int countSetBits(int number){
        int count = 0;
        while(number != 0)
        {
            count += (number & 1);
            number >>= 1;
        }
        return count;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter the decimal number: ");
            int number = sc.nextInt();
            int result = countSetBits(number);
            System.out.println("Count of Set Bits: " + result);
        }
    }
}