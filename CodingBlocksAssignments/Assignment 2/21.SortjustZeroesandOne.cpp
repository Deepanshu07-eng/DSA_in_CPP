//Sort just 0 and 1

#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int n){
	int left =0;
	int right =n-1;

	while(left < right){
		if(arr[left] == 0){
			left++;
		}
		else if(arr[right]==1){
			right--;
		}
		else{
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
	}
}

int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	sortZeroOne(arr, n);

	for(int i=0; i<n; i++){
		cout<<arr[i] << ' ';
	}


	return 0;
}