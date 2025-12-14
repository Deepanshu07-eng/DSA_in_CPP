/*
You are given an array of integers. Your task is to find the length of the Longest Increasing Subsequence (LIS) from the given array. The Longest Increasing Subsequence (LIS) is a subsequence of a sequence where the elements are sorted in strictly increasing order and the subsequence is as long as possible.


Input Format
The first line contains a single integer n, the size of the array.
The second line contains n integers, the elements of the array.

Constraints
1 ≤ n ≤ 106
-106 ≤ arr[i] ≤ 106

Output Format
Print a single integer, representing the length of the longest increasing subsequence.


Sample Input
7
10 2 9 2 5 3 7
Sample Output
3
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> lis;

    for(int x : arr) {
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if(it == lis.end())
            lis.push_back(x);
        else
            *it = x;
    }

    cout << lis.size();
    return 0;
}
