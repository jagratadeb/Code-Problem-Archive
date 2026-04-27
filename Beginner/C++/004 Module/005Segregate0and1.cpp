// Write a program that takes an array containing only 1s and 0s as input and then segregates all the 1s on the right side and the 0s on left side. Then display the array with each element separated by a space.

// Suppose, the given array is {0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1}, then the output should be:-

// 0 0 0 0 0 1 1 1 1 1 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ones = 0;
    int zeroes = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            ones++;
        else
            zeroes++;
    }

    i = 0;
    while (zeroes != 0)
    {
        arr[i] = 0;
        i++;
        zeroes--;
    }
    while (ones != 0)
    {
        arr[i] = 1;
        i++;
        ones--;
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
