/*
Given a string, count the number of distinct subsequences of it ( including empty subsequence ). For the uninformed, A subsequence of a string is a new string which is formed from the original string by deleting some of the characters without disturbing the relative positions of the remaining characters. For example, "AGH" is a subsequence of "ABCDEFGH" while "AHG" is not.


Input Format
First line of input contains an integer 't' denoting number of test cases.
Next t lines contain a string each.


Constraints
1<=t<=100
1<=length of s<=100000
s will contain upper letters only.


Output Format
For each test case ,print ans%1000000007 in a new line each ,where ans is the number of distinct subsequences.


Sample Input
2
AAA
ABCDEFG
Sample Output
4
128
*/

#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        vector<long long> dp(n + 1, 0);
        vector<int> last(26, -1);

        dp[0] = 1;

        for (int i = 1; i <= n; i++) {
            dp[i] = (2 * dp[i - 1]) % MOD;

            int ch = s[i - 1] - 'A';
            if (last[ch] != -1) {
                dp[i] = (dp[i] - dp[last[ch] - 1] + MOD) % MOD;
            }

            last[ch] = i;
        }

        cout << dp[n] % MOD << "\n";
    }

    return 0;
}
