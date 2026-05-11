// 5. Write a program to put even & odd elements of an array in 2 separate arrays. Then first print the odd array and then even array. If there are no elements in either one of the array, then print -1 in place of that array and print the other array completely. All the elements should be printed in separate lines.

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "No. of elements in the array: ";
    cin >> num;

    // take array input
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    // print array
    cout << "Display array: \n";
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    // create two new arrays for odd and even
    int odd[100], evenCounter = 0;
    int even[100], oddCounter = 0;

    // fill up the arrays
    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
            even[evenCounter++] = arr[i];
        else
            odd[oddCounter++] = arr[i];
    }

    cout << "Odd(s): " << endl;
    if (oddCounter == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < oddCounter; i++)
        {
            cout << odd[i] << endl;
        }
    }

    cout << "Even(s): " << endl;
    if (evenCounter == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < evenCounter; i++)
        {
            cout << even[i] << endl;
        }
    }

    return 0;
}