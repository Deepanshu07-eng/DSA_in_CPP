/*
A Good String is a string which contains only vowels (a,e,i,o,u) . Given a string S, print a single positive integer N where N is the length of the longest substring of S that is also a Good String.
*/

#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	int length=0;
	int maxL = 0 ;
	for(int i=0; i<s.length(); i++){
		if(s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'){
			length++ ;
		}else{
			length = 0;
		}
		maxL = max(maxL, length);
	}
	cout<<maxL<<endl;
	return 0;
}