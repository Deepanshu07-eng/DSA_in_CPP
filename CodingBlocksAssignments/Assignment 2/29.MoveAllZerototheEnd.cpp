/*Given an integer array, move all zeros present in it to the end. The solution should maintain the relative order of the items in the array and should not use the constant space*/

#include<iostream>
using namespace std;

int main () {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int j=0;

	for(int i=0; i<n; i++){
		if(arr[i] != 0){
			arr[j++] = arr[i];
			
		}
	}

	for(int i=j ; i<n; i++){
		arr[i]=0;
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}