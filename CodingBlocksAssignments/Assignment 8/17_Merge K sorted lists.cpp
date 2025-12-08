/*
Given K sorted linked lists of equal sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.


Input Format
First line contains 2 space separated integers K and N.
Next lines contain N*K space separated integers


Constraints
None


Output Format
Single line consisting of space separated numbers


Sample Input
3 4
5 5 5 9 3 13 14 17 1 8 11 18 
Sample Output
1 3 5 5 5 8 9 11 13 14 17 18 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K, N;
    cin >> K >> N;

    vector<vector<int>> lists(K, vector<int>(N));

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            cin >> lists[i][j];
        }
    }

    // Min heap: (value, (list index, element index))
    priority_queue<
        pair<int, pair<int, int>>,
        vector<pair<int, pair<int, int>>>,
        greater<>
    > pq;

    // Push first element of each list
    for (int i = 0; i < K; i++) {
        pq.push({lists[i][0], {i, 0}});
    }

    vector<int> result;

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();

        int val = top.first;
        int row = top.second.first;
        int col = top.second.second;

        result.push_back(val);

        // Push next element of same list if exists
        if (col + 1 < N) {
            pq.push({lists[row][col + 1], {row, col + 1}});
        }
    }

    for (int x : result) cout << x << " ";
    return 0;
}
