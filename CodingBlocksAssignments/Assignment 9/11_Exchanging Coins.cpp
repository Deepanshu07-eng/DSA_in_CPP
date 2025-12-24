/*
Tughlaq introduces a strange monetary system. He introduces copper coins and each coin has a number written on it. A coin n can be exchanged in a bank into three copper coins: n/2, n/3 and n/4. A coin can also be sold for gold. One can get as much grams of gold as the number written on the coin. You have one copper coin. What is the maximum weight of gold one can get from it?


Input Format
The input file contains a single integer n, the number on the coin.


Constraints
0 <= n <= 1 000 000 000


Output Format
Print the maximum weight of gold you can get.


Sample Input
12
Sample Output
13
*/

#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> dp;

long long solve(long long n) {
    if (n == 0) return 0;
    if (dp.count(n)) return dp[n];

    long long change = solve(n / 2) + solve(n / 3) + solve(n / 4);
    dp[n] = max(n, change);
    return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    cout << solve(n);
    return 0;
}
