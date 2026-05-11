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

    int found = 0;
    int key = 0;
    cout << "Enter the key: ";
    cin >> key;

    for (int i = 0; i < num; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            cout << "Index: " << i << endl;
        }
    }

    if (found == 0)
        cout << -1 << endl;
    return 0;
}