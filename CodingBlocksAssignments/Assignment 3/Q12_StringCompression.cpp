/*
Kartik Bhaiya and Kanak Bhaiya are discussing a special type of number, which they call a Coding Blocks Number (CB Number). A number qualifies as a CB Number based on the following criteria:

0 and 1 are not considered CB numbers.
The following prime numbers are always CB numbers:
2, 3, 5, 7, 11, 13, 17, 19, 23, 29.
Any other number is a CB number if it is not divisible by any of the numbers listed in point (2).
The Challenge
Kartik Bhaiya challenges Kanak Bhaiya with a problem:
He provides a string of digits, and Kanak Bhaiya must determine the maximum number of CB numbers that can be extracted from it while following these constraints:

1. Non-overlapping Substrings:
A CB number cannot be a substring or superstring of another chosen CB number.
Example: In 4991, both 499 and 991 are CB numbers, but we can choose only one of them.
2. Valid Substring Selection:
The CB number must be a contiguous substring of the given string.
Example: In 481, we cannot select 41 as a CB number because 41 is not a contiguous substring of "481."
3. Maximization Goal:
Since multiple solutions may exist, the goal is to find the maximum number of CB numbers that can be extracted from the given string.
Kanak Bhaiya has a class of Launchpad students to teach and needs help solving this challenge. Assist him in finding the solution.
*/

