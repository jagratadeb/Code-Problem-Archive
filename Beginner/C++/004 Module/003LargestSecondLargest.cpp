
// Write a program that takes n numbers as input from the user and then display the largest and second largest number in separate lines.

#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int main()
{
    int array[MAX], i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        cin >> array[i];

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondLargest && array[i] != largest)
        {
            secondLargest = array[i];
        }
    }

    cout << largest << endl;
    cout << secondLargest << endl;

    return 0;
}
