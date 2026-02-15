// Question 1: Simple Interest
// Write a program to calculate and print simple interest.
// Formula: Simple Interest = (Principal * Rate * Time) / 100

// Example:
// Input: 
// Principal = 1000
// Rate = 5
// Time = 2

// Output:
// Simple Interest = 100

#include <iostream>
using namespace std;


int calculateSimpleInterest(float principal, float rate, float time)
{
    int SI = (principal * rate * time)/100;
    return SI;
}


int main()
{
    int principal = 1000, rate = 5, time = 2;
    int result = calculateSimpleInterest(principal, rate, time);
    cout << "Simple Interest:" << result;
    return 0;
}