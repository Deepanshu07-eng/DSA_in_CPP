/*
You are given a 2-D array and you have to print the elements of upper triangle as it is and zero in the lower triangle.
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int arr[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j<i) cout<<0<<" ";
			else cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}