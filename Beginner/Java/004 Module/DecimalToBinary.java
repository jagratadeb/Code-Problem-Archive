// Write a program to convert given decimal number into a binary number.

import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int num = sc.nextInt();

            if (num == 0) {
                System.out.print(0);
                return;
            }

            int[] binary = new int[32];
            int index = 0;

            while (num > 0) {
                binary[index] = num & 1;
                index++;
                num >>= 1;
            }

            for (int i = index - 1; i >= 0; i--) {
                System.out.print(binary[i]);
            }
        }
    }
}