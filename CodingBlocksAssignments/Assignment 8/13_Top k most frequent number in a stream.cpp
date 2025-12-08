/*
Given an array of n numbers. Your task is to read numbers from the array and keep at-most K numbers at the top (according to their decreasing frequency) every time a new number is read. We basically need to print top k numbers sorted by frequency when input stream has included k distinct elements, else need to print all distinct elements sorted by frequency. If frequency of two numbers are same then print them in increasing order.


Input Format
First line contains integer t as number of test cases. Each test case contains following input. First line contains integer n and k, n represents the length of the array and next line contains n space separated integers.


Constraints
1 < t < 100 1< n < 1000


Output Format
Print top k running stream.


Sample Input
1
5 2
5 1 3 5 2
Sample Output
5 1 5 1 3 5 1 5 1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;

            // Convert map to vector of pairs (value, frequency)
            vector<pair<int, int>> vec;
            for (auto &p : freq) {
                vec.push_back({p.first, p.second});
            }

            // Sort by:
            // 1. Frequency descending
            // 2. Value ascending if frequencies equal
            sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
                if (a.second == b.second)
                    return a.first < b.first;
                return a.second > b.second;
            });

            // Print top K or all available
            int limit = min(k, (int)vec.size());
            for (int j = 0; j < limit; j++) {
                cout << vec[j].first << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}

