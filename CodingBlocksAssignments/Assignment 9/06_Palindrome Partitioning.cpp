/*
Given a string s, partition s such that every substring of the partition is a palindrome.

Return all possible palindrome partitioning of s.


Input Format
The input consists of a single string s.


Constraints
1 ≤ len(s) ≤ 16
s consists of lowercase English letters only.

Output Format
Return a 2D list containing all possible palindrome partitioning, where each list represents a partition, and each string in the list is a palindrome.

Note: Complete the given funtion only do not modify anything inside the main function


Sample Input
aab
Sample Output
[["a", "a", "b"], ["aa", "b"]]
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPal(string &s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; 
        r--;
    }
    return true;
}

void solve(int idx, string &s, vector<string> &path, vector<vector<string>> &res) {
    if (idx == s.size()) {
        res.push_back(path);
        return;
    }
    for (int i = idx; i < s.size(); i++) {
        if (isPal(s, idx, i)) {
            path.push_back(s.substr(idx, i - idx + 1));
            solve(i + 1, s, path, res);
            path.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> path;
    solve(0, s, path, res);
    return res;
}

int main() {
    string s;
    getline(cin, s);

    vector<vector<string>> ans = partition(s);

    cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << "\"" << ans[i][j] << "\"";
            if (j != ans[i].size() - 1) cout << ", ";
        }
        cout << "]";
        if (i != ans.size() - 1) cout << ", ";
    }
    cout << "]";

    return 0;
}
