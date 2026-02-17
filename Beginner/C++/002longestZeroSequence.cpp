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

#include <iostream>
using namespace std;

void countZeroes(int num)
{
    int currentZeroes = 0;
    int maxZeroes = 0;
    while (num)
    {
        if (num & 1)
        {
            currentZeroes = 0;
        }
        else
        {
            currentZeroes++;
            maxZeroes = max(maxZeroes, currentZeroes);
        }
        num >>= 1;
    }
    cout << "Number of zeroes: " << maxZeroes;
}

int main()
{
    int num;
    cout << "Enter a decimal number:\n";
    cin >> num;

    countZeroes(num);

    return 0;
}