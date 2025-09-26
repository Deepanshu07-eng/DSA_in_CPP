/*
Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

a. Write a recursive function which prints subsets of the array which sum to target.

b. Write a recursive function which counts the number of subsets of the array which sum to target. Print the value returned.

*/

#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int sum (vector<int>& a) {
	int sum = 0;
	for (int val : a) sum += val;
	return sum;
}

void subsets(vector<int>& arr, vector<vector<int>>& all, int tar, vector<int>& op, int i = 0) {
	if (sum(op) == tar) {
		for (int val : op) cout<<val<<" ";
		cout<<" ";
		all.emplace_back(op);
		return;
	}
	if (i == arr.size()) return;

	op.push_back(arr[i]);
	subsets(arr, all, tar, op, i+1);

	op.pop_back();
	subsets(arr, all, tar, op, i+1);
}

int main() {

	int n; cin>>n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}

	int tar; cin>> tar;

	vector<vector<int>> all;

	vector<int> op;

	subsets(arr, all, tar, op);

	cout<<endl<<all.size();

	
	return 0;
}