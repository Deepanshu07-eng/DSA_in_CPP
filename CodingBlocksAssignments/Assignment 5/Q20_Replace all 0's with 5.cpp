// Given an integer N, now you have to convert all zeros of N to 5.

#include<iostream>
using namespace std;

int replace0(int n){
	if ( n == 0 ) return 0;

	int result = replace0(n/10);
	int last = n% 10;

	if(last==0) last = 5;
	return result * 10 + last;
	
	}

int main () {
	int n;
	cin>>n;

	if(n==0) cout<< 5;
	else cout << replace0(n);
	return 0;
}