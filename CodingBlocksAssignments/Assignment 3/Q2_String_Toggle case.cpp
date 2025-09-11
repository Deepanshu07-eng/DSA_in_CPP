/* Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned. */

#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n = s.length();

	for(int i=0; i<n; i++){
		char ch = s[i];
		if(ch >= 'a' && ch <= 'z'){
			s[i] ='A'+(s[i] - 'a');
		}else{
			s[i] = 'a'+(s[i] - 'A');
		}
	}
	cout<<s<<endl;
	return 0;
}