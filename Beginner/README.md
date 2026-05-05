# 🟢 Beginner Problems

Foundational problems to build strong DSA basics.

## 📋 Problem List

| # | Problem | Description | Key Idea | C++ | Java | Practice |
|---|---------|-------------|----------|-----|------|----------|
| 1 | Calculate Simple Interest | SI = (P * R * T) / 100 | Direct formula application | [✓](./C++/001%20Module/001simpleInterest.cpp) | [✓](./Java/001%20Module/SimpleInterest.java) | [GFG](https://www.geeksforgeeks.org/problems/simple-interest/1) |
| 2 | Longest Sequence of 0s in Binary | Count the longest sequence of consecutive 0s in the binary form of a number. | Scan binary string and track max zero-run | [✓](./C++/002%20Module/001longestZeroSequence.cpp) | [✓](./Java/002%20Module/LongestZeroSequence.java) | X |
| 3 | Harshad Number | Check whether a number is divisible by the sum of its digits. | Sum digits then test divisibility | [✓](./C++/002%20Module/002HarshadNumber.cpp) | [✓](./Java/002%20Module/HarshadNumber.java) | [GFG](https://www.geeksforgeeks.org/problems/harshad-number/1) |
| 4 | IMEI Number Validation | Validate an IMEI number using the Luhn algorithm. | Apply Luhn checksum calculation | [✓](./C++/002%20Module/003numberValidationIMEI.cpp) | [✓](./Java/002%20Module/IMEIValidation.java) | X |
| 5 | Find the Nth Bit | Find the value of the nth bit in a number's binary representation. | Use bit-shift and mask ( (n>>k)&1 ) | [✓](./C++/002%20Module/004nthBinaryNumberBit.cpp) | [✓](./Java/002%20Module/NthBinaryNumberBit.java) | [GFG](https://www.geeksforgeeks.org/problems/find-kth-bit-of-a-number/1) |
| 6 | Count Set Bits | Count the number of set bits (1s) in binary representation of a number. | Use Brian Kernighan's bit trick (n&=n-1) | [✓](./C++/003%20Module/001countSetBits.cpp) | [✓](./Java/003%20Module/CountSetBits.java) | [LeetCode](https://leetcode.com/problems/number-of-1-bits/) |
| 7 | Check Power of 2 | Check whether a number is a power of 2 using bitwise logic. | Test n>0 && (n & (n-1))==0 | [✓](./C++/003%20Module/002powerOfTwo.cpp) | [✓](./Java/003%20Module/PowerOfTwo.java) | [LeetCode](https://leetcode.com/problems/power-of-two/), [GFG](https://www.geeksforgeeks.org/problems/power-of-2/1) |
| 8 | Armstrong Number Between A and B | Print all Armstrong numbers between two given numbers. | Sum the cubes of digits and compare with the original number | [✓](./C++/004%20Module/001armstrongNumberBetweenAandB.cpp) | [✓](./Java/004%20Module/ArmStrongNumber.java) | [GFG](https://www.geeksforgeeks.org/problems/armstrong-numbers/1) |
| 9 | Pascal Triangle | Print Pascal's triangle for a given number of rows. | Build each row from the previous row or binomial coefficients | [✓](./C++/004%20Module/002pascalTriangle.cpp) | [✓](./Java/004%20Module/PascalTriangle.java) | [LeetCode](https://leetcode.com/problems/pascals-triangle/), [GFG](https://www.geeksforgeeks.org/problems/pascal-triangle/1) |
| 10 | Largest and Second Largest | Find the largest and second largest numbers in a list. | Scan once while tracking the top two values | [✓](./C++/004%20Module/003LargestSecondLargest.cpp) | [✓](./Java/004%20Module/LargestSecondLargest.java) | X |
| 11 | Multiplication Table | Display the multiplication table of a positive number. | Loop through 1 to 10 and print products | [✓](./C++/004%20Module/004multiplicationTable.cpp) | [✓](./Java/004%20Module/MultiplicationTable.java) | X |
| 12 | Segregate 0 and 1 | Move all 0s to the left and 1s to the right. | Partition the array using counting or two pointers | [✓](./C++/004%20Module/005Segregate0and1.cpp) | [✓](./Java/004%20Module/Segregate0and1.java) | [GFG](https://www.geeksforgeeks.org/problems/segregate-0s-and-1s/1) |
| 13 | Lowest Fraction | Convert a fraction into its lowest terms. | Divide numerator and denominator by their GCD | [✓](./C++/004%20Module/006lowestFraction.cpp) | [✓](./Java/004%20Module/LowestFraction.java) | X |
| 14 | Decimal to Binary | Convert a decimal number into binary. | Repeatedly divide by 2 and collect remainders | [✓](./C++/004%20Module/007decimalToBinary.cpp) | [✓](./Java/004%20Module/DecimalToBinary.java) | [GFG](https://www.geeksforgeeks.org/problems/decimal-to-binary/1) |
| 15 | Triangle Number Pattern | Print a triangle number pattern for a given size. | Use nested loops to print row-wise patterns | [✓](./C++/004%20Module/008triangleNumber.cpp) | [✓](./Java/004%20Module/TriangleNumber.java) | X |
| 16 | Number Palindrome | Check whether a number is a palindrome. | Reverse the digits and compare with the original | [✓](./C++/004%20Module/009numberPalindrome.cpp) | [✓](./Java/004%20Module/NumberPalindrome.java) | [LeetCode](https://leetcode.com/problems/palindrome-number/) |
| 17 | Merge Two Sorted Arrays | Merge two sorted arrays into a single sorted array. | Use two pointers to traverse both arrays and build merged result | [✓](./C++/005%20Module/001MergeTwoSortedArrays.cpp) | X | [LeetCode](https://leetcode.com/problems/merge-sorted-array/) |
| 18 | Elements Less Than | Count or find elements that are less than a given value. | Single pass to filter and collect matching elements | [✓](./C++/005%20Module/002ElementsLessThan.cpp) | X | X |


---

**Total Problems:** 18 | **C++:** 18 | **Java:** 16

[← Back to Main](../README.md)