// Question 1: Count Set Bits
// Write a program to count and print the number of set bits in an entered number.
// Set bits are the count of 1s in the binary representation of that number.

// Example:
// Input: 10
// Binary: 1010
// Output: 2

// Input: 7
// Binary: 111
// Output: 3

#include <stdio.h>

// Counts how many 1-bits are present in the binary representation of num.
unsigned int countSetBits(unsigned int num)
{
  unsigned int count = 0;

  // Main logic: check the last bit using (num & 1), add it to count, then right-shift.
  while (num)
  {
    count += num & 1;
    num >>= 1;
  }

  return count;
}
int main()
{
  unsigned int num;
  scanf("%u", &num);
  printf("%u", countSetBits(num));
  return 0;
}
