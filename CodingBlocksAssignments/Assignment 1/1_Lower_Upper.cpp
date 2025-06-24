//Print "lowercase" if user enters a character between 'a-z' , 
// Print "UPPERCASE" is character lies between 'A-Z' 
// and print "Invalid" for all other characters like $,.^# etc.

#include<iostream>
using namespace std;
int main() {
	char ch;
	cin>>ch;

	if(ch>='a' && ch<='z'){
		cout<<"lowercase";
	}else if( ch>='A' && ch<='Z'){
		cout<<"UPPERCASE";
	}
	else{
		cout<<"Invalid";
	}
	return 0;
}