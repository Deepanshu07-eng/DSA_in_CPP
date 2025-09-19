/*
Replace all occurrences of pi with 3.14
*/

#include<iostream>
#include<string>
using namespace std;

void replacepi(string s,int len, int i=0){
	if(i == len) return ;
	if (s[i]=='p' && s[i+1] == 'i'){
		cout<<3.14;
		replacepi(s, len, i+2);
	}else{
		cout<<s[i];
		replacepi(s,len,i+1);
	}
	
}

int main() {
	int n;
	cin>>n;

	while(n--){
		string s;
		cin>>s;
		replacepi(s, s.length());
		cout<<endl;
	}
	return 0;
}