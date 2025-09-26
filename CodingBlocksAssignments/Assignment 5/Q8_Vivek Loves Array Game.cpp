/*
Vivek loves to play with array . One day Vivek just came up with a new array game which was introduced to him by his friend Ujjwal. The rules of the game are as follows: Initially, there is an array, A , containing 'N' integers.

In each move, Vivek must divide the array into two non-empty contiguous parts such that the sum of the elements in the left part is equal to the sum of the elements in the right part. If Vivek can make such a move, he gets '1' point; otherwise, the game ends.

After each successful move, Vivek have to discards either the left part or the right part and continues playing by using the remaining partition as array 'A'.

Vivek loves this game and wants your help getting the best score possible. Given 'A', can you find and print the maximum number of points he can score?
*/

#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>& arr, int l, int r) {
    if (l >= r) return 0;

    long long total = 0;
    for (int i = l; i <= r; i++) total += arr[i];

    long long leftSum = 0;
    for (int i = l; i < r; i++) {
        leftSum += arr[i];
        long long rightSum = total - leftSum;

        if (leftSum == rightSum) {
            return 1 + max(solve(arr, l, i), solve(arr, i + 1, r));
        }
    }
    return 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];
        cout << solve(arr, 0, N - 1) << endl;
    }
    return 0;
}