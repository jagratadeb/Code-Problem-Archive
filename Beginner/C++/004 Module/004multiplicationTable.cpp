// Write a program to take a positive number as input from the user and display its multiplication table.

// For example - If the number is 2, then the output will look like:-

// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}
