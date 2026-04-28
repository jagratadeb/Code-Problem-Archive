// Write a program to convert given decimal number into a binary number.

#include <iostream>
using namespace std;

int main()
{
    int num = 0, index = 0, binary[32];
    cin >> num;

    while (num > 0)
    {
        binary[index] = (num & 1);
        index++;
        num >>= 1;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
    return 0;
}