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

#include <iostream>
using namespace std;

bool isHarshad(int n)
{
    int temp = n, sum = 0;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    return ((n % sum) == 0);
}

int main()
{

    int num = 1729;
    bool result = isHarshad(num);

    if (result)
        cout << "Yes, it is a Harshad number.";
    else
        cout << "No, it is not a Harshad number.";

    return 0;
}