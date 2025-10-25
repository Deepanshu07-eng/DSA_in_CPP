/*
Given a string containing of ‘0’, ‘1’ and ‘?’ wildcard characters, generate all binary strings that can be formed by replacing each wildcard character by ‘0’ or ‘1’.


Input Format
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of a string S.


Constraints
1 ≤ T ≤ 60 1 ≤ length of string S ≤ 30


Output Format
Print all binary string that can be formed by replacing each wildcard character separated by space.


Sample Input
1
1??0?101s
*/

#include<iostream>
#include <vector>
#include <string>
using namespace std;

void binary(string s, int n, int i = 0) {
	if (i == n) {
		cout<<s<<" ";
		return;
	}

	if (s[i] != '?') binary(s, n, i+1);
	else {
		s[i] = '0';
		binary(s, n, i+1);

		s[i] = '1';
		binary(s, n, i+1);
	}
	
}
int main() {
	int T; cin>> T;

	while (T--) {
		string s; cin>>s;
		int n = s.length();

		binary(s, n);
	}
	return 0;
}