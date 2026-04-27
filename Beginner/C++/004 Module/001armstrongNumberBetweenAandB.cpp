// Write a program to take 2 numbers(say a and b where a<b) as input from the user and then print all the Armstrong numbers between a and b(Both inclusive).

// Armstrong number is a number that is equal to the sum of cubes of its digits.
// For example : 153  = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int num = i;
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            num /= 10;
            sum += (digit * digit * digit);
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}