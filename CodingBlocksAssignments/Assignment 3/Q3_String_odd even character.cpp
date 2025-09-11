/*
Take as input S, a string. Write a function that replaces every even character with the character having just higher ASCII code and every odd character with the character having just lower ASCII code. Print the value returned.
*/

#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n = s.length();
	for(int i=0; i<n; i++){
		if(i % 2 == 0){
			s[i] += 1;
		}else{
			s[i] -= 1;
		}
	}
	cout<<s<<endl;

	return 0;
}