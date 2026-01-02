/*
Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.


Input Format
First line contains an integer t denoting the number of test cases. Next t lines contain an integer n each.


Constraints
1<= n < 30


Output Format
Output t lines each line describing the answer.


Sample Input
1
3
Sample Output
4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<long long> dp(31);
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i <= 30; i++) {
        dp[i] = dp[i-1] + (i-1) * dp[i-2];
    }

    while(t--) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}
