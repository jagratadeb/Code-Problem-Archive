// Write a program to take a number n as input and print the following pattern depending on the value of n:-

// 1

// 1 2

// 1 2 3

// .

// .

// .

// 1 2 3 .......... n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
