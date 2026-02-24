// Question 5: Nth Bit of Binary Number
// Write a program to find the nth bit of a binary equivalent of an entered decimal number.

// Note: Take nth bit of binary number from right to left like in binary number 10, 0 is at 0th index and 1 is at 1st index.

// Example:
// Input:
// Decimal = 20
// nth bit = 4
// Binary of 20 = 10100 (reading from right: bit0=0, bit1=0, bit2=1, bit3=0, bit4=1)
// Output: 1

// Input:
// Decimal = 20
// nth bit = 0
// Binary of 20 = 10100
// Output: 0

// Input:
// Decimal = 13
// nth bit = 2
// Binary of 13 = 1101 (bit0=1, bit1=0, bit2=1, bit3=1)
// Output: 1

#include <iostream>
using namespace std;

int main()
{
    int bitStatus = 0;
    int decimal_Num = 0;
    int nth_bit = 0;

    cout << "Enter decimal number: ";
    cin >> decimal_Num;
    cout << "Enter nth bit: ";
    cin >> nth_bit;

    bitStatus = ((decimal_Num >> nth_bit) & 1);

    cout << bitStatus << endl;
}