/*
Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin>>s;
	string ans = "";
	ans += s[0];
	int n= s.length();
	for(int i=1; i<n; i++){
		int x = s[i]-s[i-1];
		ans += to_string(x) + s[i];
	}
	cout<<ans<<endl;	
	
	return 0;
}

