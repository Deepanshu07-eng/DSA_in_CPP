/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.
*/

#include<iostream>
using namespace std;

void first(int* arr, int n, int m, int i = 0){
	if(i==n) return;
	
	if (arr[i] == m ){
		cout<<i<<" ";
	}

	first(arr, n, m, i+1);
}

int main() {
	int n;
	cin>>n;

	int* arr = new int[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int m;
	cin>>m;

	first(arr, n, m);

	return 0;
}