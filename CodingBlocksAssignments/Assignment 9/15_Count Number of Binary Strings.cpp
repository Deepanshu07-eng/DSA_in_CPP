/*
You are provided an integers N. You need to count all possible distinct binary strings of length N such that there are no consecutive 1’s.


Input Format
First line contains integer t which is number of test case. For each test case, it contains an integer n which is the the length of Binary String.


Constraints
1<=t<=100 1<=n<=90

Output will in be Long


Output Format
Print the number of all possible binary strings.


Sample Input
2
2
3
Sample Output
3
5
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<long long> fib(93);
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 92; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    while(t--) {
        int n;
        cin >> n;
        cout << fib[n + 2] << "\n";
    }

    return 0;
}
