// Write a program to take a positive number as input from the user and display its multiplication table.

import java.util.Scanner;

public class MultiplicationTable {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int num = sc.nextInt();

            for (int i = 1; i <= 10; i++) {
                System.out.println(num + " x " + i + " = " + (num * i));
            }
        }
    }
}