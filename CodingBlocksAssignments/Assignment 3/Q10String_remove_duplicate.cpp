/*
Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin>>s;

	int n = s.length();
	cout<<s[0];
	for(int i=1; i<n; i++){
		if(s[i] != s[i-1]){
			cout<<s[i];
		}
	}
	cout<<endl;
	return 0;
}