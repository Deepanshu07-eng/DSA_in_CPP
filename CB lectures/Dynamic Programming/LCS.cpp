#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int lcs (string s1, string s2, int n, int m, vector<vector<int>>& dp) {
    if(n == 0 or m == 0) return dp[n][m] = 0;

    if(dp[n][m] != -1) return dp[n][m];
    if(s1[n-1] == s2[m-1]) return 1 + lcs(s1, s2, n-1, m-1, dp);
    else {
        int op1 = lcs(s1, s2, n, m-1, dp);
        int op2 = lcs(s1, s2, n-1, m, dp);

        return dp[n][m] = max(op1, op2);
    }
}

int lcsBottomUp(string s1, string s2, int n, int m) {
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return dp[n][m];
}

void printLCS(vector<vector<int>> &dp, string &s1, string &s2){
    int n= s1.size();
    int m= s2.size();
    string ans ="";

    while (n>0 and m>0){
        if(s1[n-1] == s2[m-1]){
            ans.push_back(s1[n-1]);
            n--;
            m--;
        }
        else if (dp[n-1][m] == dp[n][m]){
            n--;
        }
        else{
            m--;
        }
    }

    reverse(ans.begin(), ans.end());
    cout<<"LCS: "<<ans<<endl;

}
int main() {
    string s1 = "abcde";
    string s2 = "bcde";
    int n = 5, m = 4;
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    cout<<lcs(s1, s2, 5, 4, dp)<<endl;
    cout<<lcsBottomUp(s1, s2, n, m) <<endl;
    printLCS(dp, s1,s2);
    return 0;
}