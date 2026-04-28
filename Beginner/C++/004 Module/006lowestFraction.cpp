// Write a program to take numerator and denominator of a fraction as input. Convert the same into lowest terms and print.

// If the input is 3 and 12, then the output should look like:-

// In lowest form = 1/4

#include <iostream>
using namespace std;

// function declcaration
int gcd(int num, int den);

int main()
{
    int num = 0, den = 0, g = 0;
    cin >> num >> den;

    g = gcd(num, den);

    num /= g;
    den /= g;

    cout << "In lowest form = " << num << "/" << den << endl;
    return 0;
}

int gcd(int num, int den)
{
    while (den != 0)
    {
        int temp = den;
        den = num % den;
        num = temp;
    }
    return num;
}
