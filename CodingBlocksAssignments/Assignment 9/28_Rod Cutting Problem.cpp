/*
Given a rod of length n and a list of prices of rods of length of i, where 1<=i<=n, find the optimal way to cut the rod into smaller rods to maximize profit.The rod of length i has a value price[i-1].


Input Format
An integer N representing length of prices array. Prices array. An integer n representing rod length


Constraints
1<=n<=1000
1<=prices[i]<=1000


Output Format
An integer representing maximum profit


Sample Input
8
1 5 8 9 10 17 17 20
4
Sample Output
10
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> price(N);
    for(int i = 0; i < N; i++) cin >> price[i];

    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], price[j - 1] + dp[i - j]);
        }
    }

    cout << dp[n];
    return 0;
}
