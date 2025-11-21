/*
We are given a circular array, print the next greater number for every element. If it is not found print -1 for that number. To find the next greater number for element Ai , start from index i + 1 and go uptil the last index after which we start looking for the greater number from the starting index of the array since array is circular.
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> ans(n, -1); // Default -1
    stack<int> st; // stores indices

    // Traverse twice (2*n - 1)
    for (int i = 0; i < 2 * n; i++) {
        int current = arr[i % n];
        // Resolve elements whose next greater is found
        while (!st.empty() && arr[st.top()] < current) {
            ans[st.top()] = current;
            st.pop();
        }
        // Only push indices from the first round
        if (i < n) st.push(i);
    }

    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";

    return 0;
}
