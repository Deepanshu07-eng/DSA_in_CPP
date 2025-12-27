/*
You are given an integer n, the size of the array, and an integer target.You are also given an array arr consisting of n positive integers. Your task is to determine whether there exists a subset of arr such that the sum of its elements is equal to target.

If such a subset exists, print YES. Otherwise, print NO.

A subset is a set derived from the array by selecting any combination of elements, regardless of their order. For example, the subsets of the array [3, 4, 5] are:

{}, {3}, {4}, {5}, {3, 4}, {3, 5}, {4, 5}, {3, 4, 5}.


Input Format
The first line contains a single integer n — the size of the array.
The second line contains a single integer target — the target sum.
The third line containing n positive integers arr[1], arr[2], ..., arr[n] — the elements of the array.

Constraints

1 ≤ n ≤ 200
0 ≤ target ≤ 104
0 ≤ arr[i] ≤ 109

Output Format
Print YES if there exists a subset of arr with a sum equal to target. Otherwise, print NO.


Sample Input
5
11
2 3 7 8 10
Sample Output
YES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for(int x : arr) {
        for(int s = target; s >= 0; s--) {
            if(dp[s] && s + x <= target) {
                dp[s + x] = true;
            }
        }
    }

    if(dp[target]) cout << "YES";
    else cout << "NO";

    return 0;
}
