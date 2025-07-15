// Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which inverses the array. Print the values of inverted array

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int ans[n];
	for(int i=0; i<n; i++){
		int val=arr[i];
		ans[val]=i;
	}
	for(int i=0; i<n; i++){
		cout<<ans[i]<<' ';
	}
	
	return 0;
}