/*
Given K sorted arrays each with N elements merge them and output the sorted array


Input Format
First line contains 2 space separated integers K and N.
Next lines contain K*N space separated integers


Constraints
Elements of array <= |10^15|
N <= 10^5
K <= 10


Output Format
Single line consisting of space separated numbers


Sample Input
3 4
1 3 5 7
2 4 6 8
0 9 10 11
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int K, N;
    cin >> K >> N;

    vector<vector<long long>> arr(K, vector<long long>(N));

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    priority_queue<
        tuple<long long, int, int>,
        vector<tuple<long long, int, int>>,
        greater<tuple<long long, int, int>>
    > pq;

    // Push first column of each row
    for (int i = 0; i < K; i++) {
        pq.push(make_tuple(arr[i][0], i, 0));
    }

    vector<long long> result;

    while (!pq.empty()) {
        tuple<long long, int, int> t = pq.top();
        pq.pop();

        long long val = get<0>(t);
        int row = get<1>(t);
        int col = get<2>(t);

        result.push_back(val);

        if (col + 1 < N) {
            pq.push(make_tuple(arr[row][col + 1], row, col + 1));
        }
    }

    for (long long x : result) {
        cout << x << " ";
    }

    return 0;
}
