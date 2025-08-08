/*Take an input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.

1.It reads a number N.

2.Take Another N numbers as input and store them in an Array.

3.calculate the max value in the array and return that value.*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];

	}
	int max=arr[0];

	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	cout<<max;
	return 0;
}