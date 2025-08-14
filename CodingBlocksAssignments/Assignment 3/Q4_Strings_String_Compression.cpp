//Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2ds.

#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin>>str;

	int i=0;

	int n=str.length();
	for(int j=0; j<n; j++){
		if(str[j] != str[i]){
			cout<<str[i];
			if(j-i > 1){
				cout<<j-i;
			}
		i=j;
		}
	}

	cout<<str[i];
	if(n-i > 1){
		cout<<n-i;
	}
	return 0;
}