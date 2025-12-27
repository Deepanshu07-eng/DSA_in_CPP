/*
Given a big amount N and the array of denominations S. Assuming infinite supply of each of S = {S1,S2….Sm} denominations, find the number of ways to make change for N cents.


Input Format
First line contains an integer T denoting the total number of test cases.
For every test case, there are three lines.
First line will contain an integer 'M' denoting the size of array.
The second line contains M space-separated integers A1, A2, …, Am denoting the elements of the array.
The third line contains an integer 'N' denoting the cents.


Constraints
1 <= T <= 10 1 <= n <= 500 1 <= S[i] <= 1000 1 <= N <= 1000000


Output Format
Print number of possible ways to make change for N cents in a new line. Since answers can be large, print answer % (1000000000 + 7).


Sample Input
2
3
1 2 3
4
4
2 5 3 6
10
Sample Output
4
5
*/

#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int M;
        cin >> M;

        vector<int> S(M);
        for (int i = 0; i < M; i++) cin >> S[i];

        int N;
        cin >> N;

        vector<int> dp(N + 1, 0);
        dp[0] = 1;

        for (int coin : S) {
            for (int sum = coin; sum <= N; sum++) {
                dp[sum] = (dp[sum] + dp[sum - coin]) % MOD;
            }
        }

        cout << dp[N] << "\n";
    }

    return 0;
}
