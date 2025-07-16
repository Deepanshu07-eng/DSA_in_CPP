/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input a number M. Write a function which returns the index on which M is found in the array, in case M is not found -1 is returned. Print the value returned.You can assume that the array is sorted, but you’ve to optimize the finding process. For an array of size 1024, you can make 10 comparisons at maximum.

1.It reads a number N.
2.Take Another N numbers as input in Ascending Order and store them in an Array.
3.Take Another number M as input and find that number in Array.
4.If the number M is found, index of M is returned else -1 is returned.Print the number returned.*/

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

	int left=0;
	int right =n-1;

	int ans =-1;

	while(left <= right){
		int mid = (left+right)/2;
		if(arr[mid]==m){
			ans=mid;
			break;
		}else if(arr[mid]<m){
			left++;
		}else{
			right--;
		}
	}
	cout<<ans;
	return 0;
}