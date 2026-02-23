
import java.util.Scanner;

// Question 2: Longest Sequence of 0's in Binary
// Write a program to find the longest sequence of 0's in binary equivalent of an entered number.

// Example:
// Input: 20
// Binary: 10100
// Output: 2
// (The longest sequence of consecutive 0's is "00" which has length 2)

// Input: 529
// Binary: 1000010001
// Output: 4
// (The longest sequence of consecutive 0's is "0000" which has length 4)


class LongestZeroSequence{

    void countZeroes(int number)
    {
        int currentZeroes = 0;
        int maxZeroes = 0;
        int num =  number;
        while(num > 0)
        {
            if((num & 1)==1)
            {
                currentZeroes = 0;
            }else{
                currentZeroes++;
                maxZeroes = Math.max(maxZeroes, currentZeroes);
            }
            num >>=1;
        }

        System.out.println("Zero(s) Count: " + maxZeroes);
        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a decimal number: ");
        int num = sc.nextInt(); 

        LongestZeroSequence count = new LongestZeroSequence();
        count.countZeroes(num);

        sc.close();
    }
}
