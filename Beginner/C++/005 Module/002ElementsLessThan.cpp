
// Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[]. Print these numbers in different lines.

#include <iostream>
using namespace std;

void countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n);


int main()
{
    int arr1[100], arr2[100], m, n;
    cout << "No. of elements in array: ";
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> arr1[i];

    cout << "No. of elements in array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    cout << endl;
    countEleLessThanOrEqual(arr1, arr2, m, n);
    return 0;
}


void countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    ;
    for (i = 0; i < m; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr2[j] <= arr1[i])
            {
                count++;
            }
        }
        cout << count << " element(s) in arr2 <= " << arr1[i] << endl;
    }
}