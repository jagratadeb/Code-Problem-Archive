// Given an array and a key element, you have to find whether that element is present in the array or not.

// Print message “SUCCESSFUL SEARCH” OR “UNSUCCESSFUL SEARCH” accordingly.

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int i, key, size;
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Key? ";
    cin >> key;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "SUCCESSFUL SEARCH";
            return 0;
        }
    }
    cout << "UNSUCCESSFUL SEARCH";
    return 0;
}