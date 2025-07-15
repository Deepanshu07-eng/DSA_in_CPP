//Raj is a very smart kid who recently started learning computer programming. His coach gave him a cyclic array A having N numbers, and he has to perform Q operations on this array. In each operation the coach would provide him with a number X. After each operation, every element of the cyclic array would be replaced by the sum of itself and the element lying X positions behind it in the cyclic array. All these replacements take place simultaneously. For example, if the cyclic array was [a, b, c, d], then after the operation with X = 1, the new array would be [a+d, b+a, c+b, d+c]. He needs to output the sum of the elements of the final array modulus 10^9+7. He made a program for it but it's not very efficient. You know he is a beginner, so he wants you to make an efficient program for this task because he doesn't want to disappoint his coach.

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int t;
	cin>>t;

	int x;
	for(int i=0; i<t; i++){
		cin>>x;
	}
	int sum=0;
	for(int val:arr){
		sum += val;
	}
	int ans=sum*pow(2, t);

	cout<<ans % (1000000000 +7);
	return 0;
}