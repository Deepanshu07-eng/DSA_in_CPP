/*
Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
Note: Use cin for input for C++


Input Format
Enter a string
*/

#include<iostream>
#include <vector>
#include <string>
using namespace std;

void print(string& s, vector<string>& all, string op,int i = 0) {
	if (s[i] == '\0') {
		cout<<op<<" ";
		all.emplace_back(op);
		return;
	}

	print(s, all, op, i+1);

	op += s[i];
	print(s, all, op, i+1);
	op.erase(1);
}
int main() {
	string s; cin>>s;
	string op = "";
	vector<string> all;
	print(s, all, op);
	cout<<endl<<all.size();
	return 0;
}
