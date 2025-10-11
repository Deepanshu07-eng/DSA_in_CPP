#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring> // for memset
using namespace std;

// Recursive (pure) version
int knapsack(int *price, int *Weight, int n, int cap) {
    if (n == 0 || cap == 0) return 0;

    int op1 = INT_MIN, op2 = INT_MIN;

    if (cap >= Weight[n - 1])
        op1 = price[n - 1] + knapsack(price, Weight, n - 1, cap - Weight[n - 1]);

    op2 = knapsack(price, Weight, n - 1, cap);

    return max(op1, op2);
}

// Top-down (memoized) version
int topdown(int *price, int *Weight, int n, int cap, int dp[][100]) {
    if (n == 0 || cap == 0)
        return dp[n][cap] = 0;

    if (dp[n][cap] != -1)
        return dp[n][cap];

    int op1 = INT_MIN, op2 = INT_MIN;

    if (cap >= Weight[n - 1])
        op1 = price[n - 1] + topdown(price, Weight, n - 1, cap - Weight[n - 1], dp);

    op2 = topdown(price, Weight, n - 1, cap, dp);

    return dp[n][cap] = max(op1, op2);
}

int main() {
    int price[] = {3, 4, 5, 2};
    int Weight[] = {1, 2, 3, 4};
    int n = sizeof(price) / sizeof(int);
    int cap = 5;

    int dp[100][100];        // ✅ Declare dp before using memset
    memset(dp, -1, sizeof(dp)); // ✅ Correct usage

    cout << "Recursive: " << knapsack(price, Weight, n, cap) << endl;
    cout << "Topdown: " << topdown(price, Weight, n, cap, dp) << endl;

    return 0;
}
