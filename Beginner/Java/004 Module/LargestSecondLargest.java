// Write a program that takes n numbers as input from the user and then display the largest and second largest number in separate lines.

import java.util.Scanner;

public class LargestSecondLargest {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int[] array = new int[n];

            for (int i = 0; i < n; i++) {
                array[i] = sc.nextInt();
            }

            int largest = Integer.MIN_VALUE;
            int secondLargest = Integer.MIN_VALUE;

            for (int value : array) {
                if (value > largest) {
                    secondLargest = largest;
                    largest = value;
                } else if (value > secondLargest && value != largest) {
                    secondLargest = value;
                }
            }

            System.out.println(largest);
            System.out.println(secondLargest);
        }
    }
}