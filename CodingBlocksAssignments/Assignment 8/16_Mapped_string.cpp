/*
We are given a hashmap which maps all the letters with number. Given 1 is mapped with A, 2 is mapped with B…..26 is mapped with Z. Given a number, you have to print all the possible strings.


Input Format
A single line contains a number.


Constraints
Number is less than 10^6


Output Format
Print all the possible strings in sorted order in different lines.


Sample Input
123
Sample Output
ABC
AW
LC
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(string &s, int i, string cur, vector<string> &ans) {
    if (i == s.size()) {
        ans.push_back(cur);
        return;
    }

    int one = s[i] - '0';
    if (one >= 1) {
        solve(s, i + 1, cur + char('A' + one - 1), ans);
    }

    if (i + 1 < s.size()) {
        int two = (s[i] - '0') * 10 + (s[i + 1] - '0');
        if (two >= 10 && two <= 26) {
            solve(s, i + 2, cur + char('A' + two - 1), ans);
        }
    }
}

int main() {
    string s;
    cin >> s;

    vector<string> ans;
    solve(s, 0, "", ans);

    sort(ans.begin(), ans.end());

    for (auto &x : ans)
        cout << x << endl;

    return 0;
}
