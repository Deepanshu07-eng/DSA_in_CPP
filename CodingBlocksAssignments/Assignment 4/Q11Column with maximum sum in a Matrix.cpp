/*
Given a N*N matrix. The task is to find the index of column with maximum sum. That is the column whose sum of elements are maximum.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> colSum(N, 0);


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int val;
            cin >> val;
            colSum[j] += val;
        }
    }

    int maxSum = colSum[0];
    int colIndex = 1;

    for (int j = 1; j < N; j++) {
        if (colSum[j] > maxSum) {
            maxSum = colSum[j];
            colIndex = j + 1; 
        }
    }

    cout << colIndex << " " << maxSum << endl;

    return 0;
}
