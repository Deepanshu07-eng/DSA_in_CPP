/*
Take an input str, a string. A “twin” is defined as two instances of a char separated by a char. E.g. "AxA" the A's make a “twin”. “twins” can overlap, so "AxAxA" contains 3 “twins” - 2 for A and 1 for x. Write a function which recursively counts number of “twins” in a string. Print the value returned.
*/

#include<iostream>
#include <string>
using namespace std;

int twins(string s, int n, int i = 0, int ans = 0) {
	if (i >= n-2) return ans;

	if ((s[i] != s[i+1]) && (s[i] == s[i+2])) ans++;

	return twins(s, n, i+1, ans);
}
int main() {
	string s; cin>>s;

	cout<<twins(s, s.length());
	return 0;
}