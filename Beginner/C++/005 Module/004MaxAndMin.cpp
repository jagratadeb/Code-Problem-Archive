// 4. Write a program to find the largest and the smallest elements of an array.

#include <iostream>
using namespace std;

int maximum(int arr[], int size);
int minimum(int arr[], int size);

int main()
{
    int num, i;
    cout << "No. of elements in the array: ";
    cin >> num;

    int arr[num];
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    i = 0;
    int max = arr[i];
    int min = arr[i];

    for (i = 0; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }

    cout << "\nMax: " << max << "\nMin: " << min;
    return 0;
}
