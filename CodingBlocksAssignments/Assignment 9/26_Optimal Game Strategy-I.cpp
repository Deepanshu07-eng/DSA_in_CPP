/*
Piyush and Nimit are playing a coin game. They are given n coins with values x1, x2 …. xn where 'n' is always even. They take alternate terms. In each turn, a player picks either the first coin or the last coin from the row and removes it from the row. The value of coin is received by that player. Determine the maximum value that Piyush can win with if he moves first. Both the players play optimally.


Input Format
First line contains the number of coins 'n'.
Second line contains n space separated integers where ith index denotes the value of ith coin.


Constraints
1 < N <= 30 , N is always even
0 <= Ai <= 1000000


Output Format
Print a single line with the maximum possible value that Piyush can win with.


Sample Input
4
1 2 3 4
Sample Output
6
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<long long>> dp(n, vector<long long>(n, 0));

    for (int len = 1; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            if (i == j) {
                dp[i][j] = a[i];
            } else {
                long long x = (i + 2 <= j) ? dp[i + 2][j] : 0;
                long long y = (i + 1 <= j - 1) ? dp[i + 1][j - 1] : 0;
                long long z = (i <= j - 2) ? dp[i][j - 2] : 0;

                long long takeLeft  = a[i] + min(x, y);
                long long takeRight = a[j] + min(y, z);

                dp[i][j] = max(takeLeft, takeRight);
            }
        }
    }

    cout << dp[0][n - 1];
    return 0;
}
