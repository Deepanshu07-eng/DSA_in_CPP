/*
Shekhar is a bomb defusal specialist. He once encountered a bomb that can be defused only by a secret code. He is given a number N and a number K. And he is also given permutation of first N natural numbers . The defusal code is the largest permutation possible by doing atmost K swaps among a pair of the given permutation. Help him to find the final permutation.


Input Format
First line contains ​an integer N and an integer k. The next line contains N space separated integers denoting the given permutation.


Constraints
1 <= n <= 10^5
1<= K <= 10^9


Output Format
The final permutation of the numbers with every number separated by a space with other number.


Sample Input
5 2
3 4 1 2 5
Sample Output
5 4 3 2 1
Explanation
First we can swap 5 with 3 which gives us 5 4 1 2 3 and then we can swap 3 and 1 which gives us 5 4 3 2 1.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    long long K;
    cin >> N >> K;

    vector<int> arr(N);
    vector<int> pos(N + 1);  // pos[value] = index

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    for (int i = 0; i < N && K > 0; i++) {
        int desired = N - i;

        // If already the correct maximum at this position
        if (arr[i] == desired)
            continue;

        int swapIndex = pos[desired];

        // Update positions in map
        pos[arr[i]] = swapIndex;
        pos[desired] = i;

        // Perform swap
        swap(arr[i], arr[swapIndex]);

        K--;
    }

    for (int x : arr)
        cout << x << " ";

    return 0;
}
