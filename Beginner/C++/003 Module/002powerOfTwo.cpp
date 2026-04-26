// Question 2: Check Power of 2
// Write a program to check whether an entered number is a power of 2.
// Print "Yes" if it is a power of 2, otherwise print "No".

// Example:
// Input: 8
// Output: Yes

// Input: 10
// Output: No

#include <iostream>
using namespace std;

// Returns true if num is a power of 2, otherwise false.
bool checkPowerOfTwo(int num);

int main()
{
    int num;
    cin >> num;

    if (checkPowerOfTwo(num))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

bool checkPowerOfTwo(int num)
{
    // Main logic: a positive power of 2 has exactly one set bit, so num & (num - 1) is 0.
    if (num > 0 && ((num & (num - 1)) == 0))
        return 1;
    else
        return 0;
}