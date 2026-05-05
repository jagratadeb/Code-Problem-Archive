// Write a program to merge two sorted arrays.

// Display the elements of the merged array in separate lines.


#include <iostream>
using namespace std;

int populate(int array[]);
void display(int array[], int size);
int merge(int array1[], int array2[], int result[], int size1, int size2);

int main()
{
    int array1[100], array2[100], array3[200];
    int size1, size2;
    int merged_size;

    size1 = populate(array1);
    size2 = populate(array2);

    display(array1, size1);
    display(array2, size2);

    merged_size = merge(array1, array2, array3, size1, size2);

    display(array3, merged_size);

    return 0;
}

int populate(int array[])
{
    int num = 0;
    cout << "No. of elements in array: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    return num;
}

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int merge(int array1[], int array2[], int result[], int size1, int size2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int size_result = 0;

    while (i < size1 && j < size2)
    {
        if (array1[i] <= array2[j])
        {
            result[k++] = array1[i++];
        }
        else
        {
            result[k++] = array2[j++];
        }
    }

    while (i < size1)
    {
        result[k++] = array1[i++];
    }
    while (j < size2)
    {
        result[k++] = array2[j++];
    }

    return size_result = k;
}
