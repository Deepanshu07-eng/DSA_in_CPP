/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.
*/

#include<iostream>
using namespace std;

int first(int* arr, int n, int m, int i){
	if(i==-1) return -1;
	
	if (arr[i] == m ) return i;

	return first(arr, n, m, i-1);

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

	cout<<first(arr, n, m,n-1)<<endl;

	return 0;
}