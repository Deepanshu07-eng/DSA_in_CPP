/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Print the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

You may assume that you have an infinite number of each kind of coin.

The answer is guaranteed to fit into a signed 32-bit integer.


Input Format
First Line Contains amount
Second Line contains size of array
Third line contains elements of array


Constraints
1 <= coins.length <= 300
1 <= coins[i] <= 5000
All the values of coins are unique.
0 <= amount <= 5000


Output Format
Print the amount (Integer)


Sample Input
5
3
1 2 5
Sample Output
4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int amount;
    cin >> amount;

    int n;
    cin >> n;

    vector<int> coins(n);
    for(int i = 0; i < n; i++) cin >> coins[i];

    vector<int> dp(amount + 1, 0);
    dp[0] = 1;

    for(int coin : coins) {
        for(int sum = coin; sum <= amount; sum++) {
            dp[sum] += dp[sum - coin];
        }
    }

    cout << dp[amount];
    return 0;
}
