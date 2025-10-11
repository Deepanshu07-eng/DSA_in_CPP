#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

// For max profit, we use dp/ recursion, instead of Greedy(price/weight ratio) !

int knapsack(vector<int>& price, vector<int>& wt, int n, int cap) {
    if(n == 0 || cap == 0) return 0;

    int op1 = INT_MIN, op2 = INT_MIN;
    if(cap >= wt[n-1]) op1 = price[n-1] + knapsack(price, wt, n-1, cap - wt[n-1]);
    op2 = 0 + knapsack(price, wt, n-1, cap);

    return max(op1, op2);
}
int TDknapsack(vector<int>& price, vector<int>& wt, int n, int cap, vector<vector<int>>& dp) {
    if(n == 0 || cap == 0) return dp[n][cap] = 0;

    if(dp[n][cap] != -1) return dp[n][cap];
    int op1 = INT_MIN, op2 = INT_MIN;
    if(cap >= wt[n-1]) op1 = price[n-1] + TDknapsack(price, wt, n-1, cap - wt[n-1], dp);
    op2 = 0 + TDknapsack(price, wt, n-1, cap, dp);

    return dp[n][cap] = max(op1, op2);
}

int BUknapsack(vector<int>& price, vector<int>& wt, int N, int C) {
    vector<vector<int>> dp(N+1, vector<int>(C+1, 0));

    for(int n = 1; n <= N; n++) {
        for(int c = 1; c<= C; c++) {
            int op1 = INT_MIN, op2 = INT_MIN;
            if(c >= wt[n-1]) op1 = price[n-1] + dp[n-1][c-wt[n-1]];
            op2 = dp[n-1][c];

            dp[n][c] = max(op1, op2);
        }
    }

    return dp[N][C];
}
int main() {
    int n; cin>>n;

    vector<int> price(n), wt(n);
    for(int i = 0; i < n; i++) cin>>price[i];
    for(int i = 0; i < n; i++) cin>>wt[i];

    int cap; cin>>cap;

    vector<vector<int>> dp(n+1, vector<int>(cap+1, -1));

    cout<<"Max profit: "<<knapsack(price, wt, n, cap)<<endl;
    cout<<"Max profit: "<<TDknapsack(price, wt, n, cap, dp)<<endl;
    cout<<"Max profit: "<<BUknapsack(price, wt, n, cap)<<endl;
    return 0;
}