//One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.

#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;

string word = "";
for(char c : s){
	if(isupper(c)&& !word.empty()){
		cout << word << endl;
		word="";
	}
	word += c;
}
	cout<<word<<endl;
	return 0;
}