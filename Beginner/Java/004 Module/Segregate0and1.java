// Write a program that takes an array containing only 1s and 0s as input and then segregates all the 1s on the right side and the 0s on left side.

import java.util.Scanner;

public class Segregate0and1 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            int[] arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int ones = 0;
            int zeroes = 0;

            for (int value : arr) {
                if (value == 1) {
                    ones++;
                } else {
                    zeroes++;
                }
            }

            int index = 0;
            while (zeroes != 0) {
                arr[index++] = 0;
                zeroes--;
            }

            while (ones != 0) {
                arr[index++] = 1;
                ones--;
            }

            for (int value : arr) {
                System.out.print(value + " ");
            }
        }
    }
}