/*
Aakash has K identical plates and N floors. He needs to find the lowest floor at which the plate will break down aka critical floor. However, he doesn't like climbing stairs again and again. So he decided to take your help. Help him design a strategy that would tell him the minimum no of trials he need to perform for knowing the critical floor.

Assume that plate will only break at critical floor and floors higher than that.

_Hint :
_Recursion tells u what u intend to calculate._
Test case 3 is only for students who think that the test cases are easy.


Input Format
The first line contains T, the number of test cases.
Next T line follows 2 space separated integers, first being the number of plates K, next being the number of floors N.


Constraints
0 < T < 10

0 < K < 1000

0 < N < 1000


Output Format
T lines of required answer


Sample Input
1
2 3
Sample Output
2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int K, N;
        cin >> K >> N;

        vector<long long> dp(K + 1, 0);
        int moves = 0;

        while(dp[K] < N) {
            moves++;
            for(int i = K; i >= 1; i--) {
                dp[i] = dp[i] + dp[i - 1] + 1;
            }
        }

        cout << moves << "\n";
    }

    return 0;
}
