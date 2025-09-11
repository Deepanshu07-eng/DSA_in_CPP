/*
Take as input S, a string. Write a program that gives the count of substrings of this string which are palindromes and Print the ans.
*/

#include<iostream>
#include <string>
using namespace std;

bool isPalindrome(string& s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}
int main() {
	string s; cin>>s;
	int n = s.length();
	int ans = 0;

	for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
			if(isPalindrome(s, i ,j)) ans++;
        }
    }
	cout<<ans;
	return 0;
}