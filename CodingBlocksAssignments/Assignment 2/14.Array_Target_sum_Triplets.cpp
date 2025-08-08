//Take as input N, the size of an array. Take N more inputs and store that in an array. Take another number’s input as M. Write a function which returns the index on which M is found in an array, in case M is not found -1 is returned. Print the value returned.

//It reads a number N.
//2.Take Another N numbers as an input and store them in an Array.
//Take another number M as an input.
//If M is found in the Array the index of M is returned else -1 is returned and print the value returned.

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int m;
	cin>>m;

	int ans=-1;

	for(int i=0; i<n; i++){
		if(m == arr[i]){
			ans =i;
		}
	}
	cout<<ans;
	

	return 0;
}