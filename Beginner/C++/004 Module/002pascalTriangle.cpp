// Write a program to take a number n as input and print pascal's triangle with n number of rows

// Note that 1 space is needed by default at start of each line.

// Input: 6
//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1
//  1 5 10 10 5 1

// Input: 5
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1

#include <iostream>
using namespace std;

int GetTriangle(int r)
{
    int i, j, k, number = 1;
    for (i = 0; i < r; i++)
    {
        for (k = r; k > i; k--)
        {
            cout << " ";
        }
        number = 1;
        for (j = 0; j <= i; j++)
        {
            cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        cout << "\n";
    }
}

int main()
{
    int r;
    cin >> r;
    GetTriangle(r);
    return 0;
}
