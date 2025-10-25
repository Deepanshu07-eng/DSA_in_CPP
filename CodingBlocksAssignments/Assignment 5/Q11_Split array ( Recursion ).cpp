/*
Take as input N, a number. Take N more inputs and store that in an array.

a. Write a recursive function which counts the number of ways the array could be split in two groups, so that the sum of items in both groups is equal. Each number in the array must belong to one of the two groups. Print the value returned.

b. Write a recursive function which keeps track of ways an array could be split in two groups, so that the sum of items in both groups is equal. Each number in the array must belong to one of the two groups. Return type of function should be void. Print the two groups, each time you find a successful split.


Input Format
Take as input N, a number. Take N more inputs and store that in an array.
*/

#include<iostream>
#include <vector>
using namespace std;

void splits(vector<int>& arr, int n, int& count, vector<int>& g1, vector<int>& g2, int sum1 = 0, int sum2 = 0, int i = 0) {
	if (i == n) {
		if (sum1 == sum2) {
			count++;
			for (int val : g1) cout<<val<<" ";
			cout<<"and ";
			for (int val : g2) cout<<val<<" ";
			cout<<endl;
		}
		return;
	}

	g1.push_back(arr[i]);
	splits(arr, n, count, g1, g2, sum1+arr[i], sum2, i+1);
	g1.pop_back();

	g2.push_back(arr[i]);
	splits(arr, n, count, g1, g2, sum1, sum2+arr[i], i+1);
	g2.pop_back();
}
int main() {
	int n; cin>>n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin>>arr[i];

	vector<int> g1, g2;
	int count = 0;

	splits(arr, n, count, g1, g2);
	cout<<count;
	return 0;
}