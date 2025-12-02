/*
Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.


Input Format
N(integer) followed by N strings.


Constraints
N<=1000


Output Format
N lines each containing one string.


Sample Input
3
bat
apple
batman

Sample Output
apple
batman
bat
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    if (a.find(b) == 0 || b.find(a) == 0) {
        return a.length() > b.length();
    }
    return a < b;
}

int main() {
    int N;
    cin >> N;
    
    vector<string> v(N);
    for (int i = 0; i < N; i++) cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    for (auto &s : v) cout << s << endl;

    return 0;
}
