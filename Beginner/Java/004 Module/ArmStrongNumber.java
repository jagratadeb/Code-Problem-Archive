// Write a program to take 2 numbers(say a and b where a<b) as input from the user and then print all the Armstrong numbers between a and b(Both inclusive).

// Armstrong number is a number that is equal to the sum of cubes of its digits.
// For example : 153  = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

import java.util.Scanner;

class ArmStrongNumber{
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            for(int i = a; i <= b ; i++){
                int sum = 0;
                int num = i;
                while(num > 0){
                    int digit = num % 10;
                    num /= 10;
                    sum += digit * digit * digit;
                }
                if(sum == i){
                    System.out.println(i);
                }
            }
        }
    }
}