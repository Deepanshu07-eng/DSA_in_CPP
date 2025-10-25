/*
Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.


Input Format
Enter a number in form of a String


Constraints
1 <= Length of String <= 10


Output Format
Print the number after converting it into integer


Sample Input
1234
*/

#include<iostream>
#include<string>
using namespace std;

int convert(string s, int n) {
	if (n == 0) return 0;

	return (10 * convert(s, n-1)) + (s[n-1] - '0');
}
int main() {
	string s; cin>>s;

	int n = s.length();

	cout<<convert(s, n);
	return 0;
}