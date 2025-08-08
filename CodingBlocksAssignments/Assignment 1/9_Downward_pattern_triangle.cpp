//Write a program to print given pattern by taking input N.

#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
            cout<<" ";
		}
        for(int stars=0; stars<n-i; ++stars ){
            cout<<"* ";
        }
        cout<<endl;
	}
	return 0;
}