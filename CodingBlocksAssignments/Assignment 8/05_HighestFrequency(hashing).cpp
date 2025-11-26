/*
Given an array find the number which comes with maximum frequency. It must work in O(n) time complexity.


Input Format
Enter the size of the array N and add N more numbers and store in an array


Constraints
1 <= N <= 10^7
-109 <= A[i] <= 109


Output Format
Display the number with the maximum frequency.


Sample Input
5
1 2 2 2 3
Sample Output
2

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    unordered_map<long long, int> freq;
    long long x;

    for (int i = 0; i < N; i++) {
        cin >> x;
        freq[x]++;
    }

    long long ans = 0;
    int maxFreq = 0;

    for (auto &it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            ans = it.first;
        }
    }

    cout << ans;
    return 0;
}
