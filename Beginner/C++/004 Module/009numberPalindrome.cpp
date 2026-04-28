// Write a program to check if a number is a palindrome or not and print "TRUE" if it is palindrome and "FALSE" if it is not.

#include <iostream>
using namespace std;

int rev(int n);

int main()
{
    int n;
    cin >> n;

    if (n == rev(n))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
    return 0;
}

int rev(int n)
{
    int rev_n = 0;
    while (n > 0)
    {
        rev_n *= 10;
        int digit = n % 10;
        rev_n += digit;
        n /= 10;
    }
    return rev_n;
}