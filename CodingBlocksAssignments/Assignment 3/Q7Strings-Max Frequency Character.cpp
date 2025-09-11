/*
Given a string S, the task is to identify the character that appears most frequently. It is guaranteed that only one character has the highest frequency.
*/

#include<iostream>
#include<unordered_map>
using namespace std; 

int main() {
	string s;
	cin >> s;

	unordered_map<char, int>freq;
	for(int i=0; i<s.length(); i++){
		freq[s[i]]++;
	}
	int ans = 0;
	char ch;
	for(auto it : freq){
		if(it.second > ans){
			ch = it.first;
			ans = it.second;
		}
	}
	cout<<ch<<endl;
	return 0;
}