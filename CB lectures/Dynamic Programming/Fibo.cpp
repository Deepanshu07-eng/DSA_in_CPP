#include <iostream>
#include<cstring>
using namespace std;

int fibo(int n){
    if (n == 0 || n == 1){
        return n;
    }    
    return fibo(n-1) + fibo(n-2);
}

int solve (int n, int *dp){
    if ( n == 0 || n == 1){
        dp[n] =n;
        return n;
    }

    // DP ke array ko check karo, kahi already hai to nhi
    if(dp[n] != -1 ){
        return dp[n];
    }
    return dp[n] = solve(n-1, dp) + solve(n-2, dp);
}

int main() {
    int n;
    cin>>n;
    int dp[1000]; 
    memset(dp, -1, sizeof dp);

    cout<<solve(n, dp) << endl;
    cout<< fibo(n) << endl;

    return 0;
}