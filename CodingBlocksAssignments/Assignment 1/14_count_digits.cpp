/*Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.


Input Format
Integer (A number) Integer (A digit) */

#include<iostream>
using namespace std;

int countOccurence (int num, int digit) {
	int count = 0;
	while (num > 0) {
		if (digit == (num % 10)) count++;
		num /= 10;
	}
	return count;
}
int main() {

	int num;
	cin>>num;

	int digit;
	cin>>digit;

	if (num < 0 || num > 1000000000 || digit < 0 || digit > 9) return 0;
	
	cout<<countOccurence(num, digit);
	return 0;
}