/*
Take as input str, a string. a.Write a recursive function which counts the number of times ‘hi’ appears in the string. Print the value returned. b.Write a recursive function which removes all ‘hi’ in the string. Print the value returned. c.Write a recursive function which replaces all ‘hi’ in the string with ‘bye’. Print the value returned.

*/

#include<iostream>
using namespace std;

void replacehi(string str, int length, int i=0 ){
	
	if(i==length) return ;

	if(str[i]=='h' && str[i+1]=='i' ){
		cout<<"bye";
		replacehi(str, length, i+2);
	}
	else{
		cout<<str[i];
		replacehi(str, length, i+1);
	}

}
void removehi(string str, int length, int i=0 ){
	
	if(i==length) return ;

	if(str[i]=='h' && str[i+1]=='i' ){
		removehi(str, length, i+2);
	}
	else{
		cout<<str[i];
		removehi(str, length, i+1);
	}
}

int counthi(string str, int length, int i=0, int ans =0){
	
	if(i==length) return ans ;

	if(str[i]=='h' && str[i+1]=='i' ){
		return counthi(str, length, i+2, ans+1 );

	}
	else{
		return counthi(str, length, i+1, ans);

	}
}




int main() {
	string str;
	cin>>str;
	
	cout<<counthi(str, str.length())<<endl;
	removehi(str, str.length());
	cout<<endl;
	replacehi(str, str.length());
	
	return 0;
}