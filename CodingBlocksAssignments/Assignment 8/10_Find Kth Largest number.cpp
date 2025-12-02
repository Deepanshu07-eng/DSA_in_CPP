/*
Find the kth largest element in an unsorted array.
Note:It is the kth largest element in the sorted order, not the kth distinct element.


Input Format
First line contains integer n as size of array. Second line contains the value of k. Third line contains n integers as element of array.


Constraints
1 ≤ k ≤ array's length.


Output Format
Print the kth largest element as output.


Sample Input
6
2
3 2 1 5 6 4
Sample Output
5
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << arr[n - k];

    return 0;
}
