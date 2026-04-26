// Question 4: IMEI Number Validation
// Write a program to check an entered number is IMEI number or not and print Yes, if IMEI number otherwise print No.

// Hint: An IMEI number is a 15-digit number. Starting from the rightmost digit, double every second digit.
// If a doubled digit is greater than 9, add its digits (equivalent to subtracting 9).
// If the final sum is exactly divisible by 10, the number is a valid IMEI number.

// Example:
// Input: 474154203237518
// Process (from right to left):
// 8 + (1*2=2) + 5 + (7*2=14→5) + 3 + (2*2=4) + 3 + (0*2=0) + 2 + (4*2=8) + 5 + (1*2=2) + 4 + (7*2=14→5) + 4 = 60
// 60 % 10 = 0
// Output: Yes

// Input: 123456789012345
// Sum = 68 (not divisible by 10)
// Output: No

#include <iostream>
#include <string>
using namespace std;

bool isValidIMEI(string s);

int main()
{
    string s = "474154203237518";
    cout << "Checking [" << s << "]" << endl;

    if (isValidIMEI(s))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}

bool isValidIMEI(string s)
{
    if (s.length() != 15)
        return false;

    bool alternate = false;
    int sum = 0;

    for (int i = 14; i >= 0; i--)
    {
        int digit = s[i] - '0';
        if (alternate)
        {
            digit = 2 * digit;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
        alternate = !alternate;
    }

    return ((sum % 10) == 0);
}