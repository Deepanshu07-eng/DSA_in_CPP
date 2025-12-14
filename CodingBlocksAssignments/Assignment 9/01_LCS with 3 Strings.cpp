/*
Given 3 strings ,the task is to find the longest common sub-sequence in all three given sequences.


Input Format
First line contains first string . Second line contains second string. Third line contains the third string.


Constraints
The length of all strings is |s|< 200


Output Format
Output an integer denoting the length of longest common subsequence of above three strings.


Sample Input
GHQWNV
SJNSDGH
CPGMAH
Sample Output
2
*/

#include <bits/stdc++.h>
using namespace std;

int dp[201][201][201];

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    int n1 = a.size();
    int n2 = b.size();
    int n3 = c.size();

    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            for (int k = 1; k <= n3; k++) {
                if (a[i-1] == b[j-1] && a[i-1] == c[k-1]) {
                    dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
                } else {
                    dp[i][j][k] = max({
                        dp[i-1][j][k],
                        dp[i][j-1][k],
                        dp[i][j][k-1]
                    });
                }
            }
        }
    }

    cout << dp[n1][n2][n3];
    return 0;
}
