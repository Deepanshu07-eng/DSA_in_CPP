/*
Take as input str, a string. Write a recursive function which returns all the words possible by rearranging the characters of this string which are in dictionary order smaller than the given string. The output strings must be lexicographically sorted.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void generate(string &s, string &chosen, vector<bool> &used, string &org) {
    if (chosen.size() == s.size()) {
        if (chosen < org) {
			cout<<chosen<<endl;
        }
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        if (!used[i]) {
            used[i] = true;
            chosen.push_back(s[i]);

            generate(s, chosen, used, org);

            // backtrack
            chosen.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    string org;
    cin >> org;

    string s = org;
    sort(s.begin(), s.end()); 

    vector<bool> used(s.size(), false);
    string chosen = "";

    generate(s, chosen, used, org);

    return 0;
}