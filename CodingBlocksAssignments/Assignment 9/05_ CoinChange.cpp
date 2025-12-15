/*
You are given N distinct denominations of coins and a target integer amount T. Each coin has an infinite supply, and you can use each coin denomination as many times as needed.

Your task is to calculate the number of distinct ways to make the target amount T using the given coin denominations. Since the answer can be large, output the result modulo 109 + 7.


Input Format
The first line contains two integers N and T — the number of coin denominations and the target amount.
The second line contains N space-separated integers Arr[i] — the coin denominations.

Constraints

1 ≤ N ≤ 500
0 ≤ T ≤ 5000
1 ≤ Arr[i] ≤ 5000
All Arr[i] are distinct.

Output Format
Output a single integer — the number of ways to form the target amount T using the given coin denominations, modulo 109 + 7.


Sample Input
3 5
1 2 5
Sample Output
4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const int MOD = 1e9 + 7;

    int N, T;
    cin >> N >> T;

    vector<int> coins(N);
    for(int i = 0; i < N; i++) cin >> coins[i];

    vector<int> dp(T + 1, 0);
    dp[0] = 1;

    for(int coin : coins) {
        for(int sum = coin; sum <= T; sum++) {
            dp[sum] = (dp[sum] + dp[sum - coin]) % MOD;
        }
    }

    cout << dp[T];
    return 0;
}
