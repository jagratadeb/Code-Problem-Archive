// Write a program to take a number n as input and print pascal's triangle with n number of rows

// Note that 1 space is needed by default at start of each line.

import java.util.Scanner;

public class PascalTriangle {
    static void getTriangle(int rows) {
        for (int i = 0; i < rows; i++) {
            for (int k = rows; k > i; k--) {
                System.out.print(" ");
            }

            long number = 1;
            for (int j = 0; j <= i; j++) {
                System.out.print(number + " ");
                number = number * (i - j) / (j + 1);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int rows = sc.nextInt();
            getTriangle(rows);
        }
    }
}