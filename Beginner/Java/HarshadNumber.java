// Question 3: Harshad Number
// Write a program to check the entered number is harshad number or not and print 'Yes' for harshad number or 'No' for non-harshad number.

// Hint: A number is a harshad number, if the sum of digits of entered number completely divides the entered number.

// Example:
// Input: 18
// Sum of digits = 1 + 8 = 9
// 18 % 9 = 0
// Output: Yes

// Input: 19
// Sum of digits = 1 + 9 = 10
// 19 % 10 = 9 (not divisible)
// Output: No

// Input: 12
// Sum of digits = 1 + 2 = 3
// 12 % 3 = 0
// Output: Yes

class HarshadNumber{

    boolean isHarshad(int n)
    {
        int sum = 0, temp = n;
        while(temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        return ((n % sum) == 0);
    }

    public static void main(String[] args) {
        int num = 1729;
        HarshadNumber n = new HarshadNumber();
        boolean result = n.isHarshad(num);

        if (result)
            System.out.println("Yes, it is a Harshad number.");
        else
            System.out.println("No, it is not a Harshad number.");
    }
}