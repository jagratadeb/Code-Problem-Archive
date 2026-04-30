// Write a program to take numerator and denominator of a fraction as input. Convert the same into lowest terms and print.

import java.util.Scanner;

public class LowestFraction {
    static int gcd(int num, int den) {
        num = Math.abs(num);
        den = Math.abs(den);

        while (den != 0) {
            int temp = den;
            den = num % den;
            num = temp;
        }
        return num;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int num = sc.nextInt();
            int den = sc.nextInt();
            int g = gcd(num, den);

            num /= g;
            den /= g;

            System.out.println("In lowest form = " + num + "/" + den);
        }
    }
}