/*Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that reverses the array. Print the values in reversed array.

1.It reads a number N.
2.Take Another N numbers as input and store them in an Array.
3.Reverse the elements in the Array.
4.Print the reversed Array.*/

#include<iostream>
#include<algorithm>

using namespace std;
int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}	

	int left =0, right= n-1;

	while(left<=right){
		swap(arr[right--], arr[left++]);
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}