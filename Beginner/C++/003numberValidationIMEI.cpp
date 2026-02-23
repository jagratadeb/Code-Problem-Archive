// Question 4: IMEI Number Validation
// Write a program to check an entered number is IMEI number or not and print Yes, if IMEI number otherwise print No.

// Hint: An IMEI number is a 15 digit number and it is said to be IMEI number, if the sum of the number is exactly divisible by 10. But when we entered the number for alternate digits (from last), the digit will be taken as its double. If the doubled digit is greater than 9, add its digits.

// Example:
// Input: 474154203237518
// Process (from right to left):
// 8 + (1*2=2) + 5 + (1*2=2) + 7 + (3*2=6) + 2 + (3*2=6) + 2 + (0*2=0) + 4 + (5*2=10→1+0=1) + 1 + (4*2=8) + 7 = 60
// 60 % 10 = 0
// Output: Yes

// Input: 123456789012345
// Sum = 60 (not divisible by 10)
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