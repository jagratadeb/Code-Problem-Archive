# 🟢 Beginner Problems

Foundational problems to build strong DSA basics.

## 📋 Problem List

| # | Problem | Description | Key Idea | C++ | Java |
|---|---------|-------------|----------|-----|------|
| 1 | Calculate Simple Interest | SI = (P * R * T) / 100 | Direct formula application | [✓](./C++/001%20Module/001simpleInterest.cpp) | [✓](./Java/001%20Module/SimpleInterest.java) |
| 2 | Longest Sequence of 0s in Binary | Count the longest sequence of consecutive 0s in the binary form of a number. | Scan binary string and track max zero-run | [✓](./C++/002%20Module/001longestZeroSequence.cpp) | [✓](./Java/002%20Module/LongestZeroSequence.java) |
| 3 | Harshad Number | Check whether a number is divisible by the sum of its digits. | Sum digits then test divisibility | [✓](./C++/002%20Module/002HarshadNumber.cpp) | [✓](./Java/002%20Module/HarshadNumber.java) |
| 4 | IMEI Number Validation | Validate an IMEI number using the Luhn algorithm. | Apply Luhn checksum calculation | [✓](./C++/002%20Module/003numberValidationIMEI.cpp) | [✓](./Java/002%20Module/IMEIValidation.java) |
| 5 | Find the Nth Bit | Find the value of the nth bit in a number's binary representation. | Use bit-shift and mask ( (n>>k)&1 ) | [✓](./C++/002%20Module/004nthBinaryNumberBit.cpp) | [✓](./Java/002%20Module/NthBinaryNumberBit.java) |
| 6 | Count Set Bits | Count the number of set bits (1s) in binary representation of a number. | Use Brian Kernighan's bit trick (n&=n-1) | [✓](./C++/003%20Module/001countSetBits.cpp) | [✓](./Java/003%20Module/CountSetBits.java) |
| 7 | Check Power of 2 | Check whether a number is a power of 2 using bitwise logic. | Test n>0 && (n & (n-1))==0 | [✓](./C++/003%20Module/002powerOfTwo.cpp) | [✓](./Java/003%20Module/PowerOfTwo.java) |
| 8 | Armstrong Number Between A and B | Print all Armstrong numbers between two given numbers. | Sum the cubes of digits and compare with the original number | [✓](./C++/004%20Module/001armstrongNumberBetweenAandB.cpp) | — |
| 9 | Pascal Triangle | Print Pascal's triangle for a given number of rows. | Build each row from the previous row or binomial coefficients | [✓](./C++/004%20Module/002pascalTriangle.cpp) | — |
| 10 | Largest and Second Largest | Find the largest and second largest numbers in a list. | Scan once while tracking the top two values | [✓](./C++/004%20Module/003LargestSecondLargest.cpp) | — |
| 11 | Multiplication Table | Display the multiplication table of a positive number. | Loop through 1 to 10 and print products | [✓](./C++/004%20Module/004multiplicationTable.cpp) | — |
| 12 | Segregate 0 and 1 | Move all 0s to the left and 1s to the right. | Partition the array using counting or two pointers | [✓](./C++/004%20Module/005Segregate0and1.cpp) | — |
| 13 | Lowest Fraction | Convert a fraction into its lowest terms. | Divide numerator and denominator by their GCD | [✓](./C++/004%20Module/006lowestFraction.cpp) | — |
| 14 | Decimal to Binary | Convert a decimal number into binary. | Repeatedly divide by 2 and collect remainders | [✓](./C++/004%20Module/007decimalToBinary.cpp) | — |
| 15 | Triangle Number Pattern | Print a triangle number pattern for a given size. | Use nested loops to print row-wise patterns | [✓](./C++/004%20Module/008triangleNumber.cpp) | — |
| 16 | Number Palindrome | Check whether a number is a palindrome. | Reverse the digits and compare with the original | [✓](./C++/004%20Module/009numberPalindrome.cpp) | — |


---

**Total Problems:** 16 | **C++:** 16 | **Java:** 7

[← Back to Main](../README.md)