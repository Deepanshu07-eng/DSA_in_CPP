/*
Take as input str, a string. str represents keys pressed on a nokia phone keypad. We are concerned with all possible words that can be written with the pressed keys.

Assume the following alphabets on the keys: 1 -> abc , 2 -> def , 3 -> ghi , 4 -> jkl , 5 -> mno , 6 -> pqrs , 7 -> tuv , 8 -> wx , 9 -> yz

E.g. “12” can produce following words “ad”, “ae”, “af”, “bd”, “be”, “bf”, “cd”, “ce”, “cf”

a. Write a recursive function which returns the count of words for a given keypad string. Print the value returned.

b.Write a recursive function which prints all possible words for a given keypad string (void is the return type for function).
*/

#include <bits/stdc++.h>
using namespace std;

string keypad[] = {
    "",     // 0 (not used)
    "abc",  // 1
    "def",  // 2
    "ghi",  // 3
    "jkl",  // 4
    "mno",  // 5
    "pqrs", // 6
    "tuv",  // 7
    "wx",   // 8
    "yz"    // 9
};


void generateWords(string str, string ans, vector<string>& res, int index=0) {
    if (index == str.size()) {
        res.push_back(ans);
        return;
    }

    int digit = str[index] - '0';
    for (char ch : keypad[digit]) {
        generateWords(str, ans + ch, res, index + 1);
    }
}


int countWords(string str, int index=0) {
    if (index == str.size()) return 1;

    int digit = str[index] - '0';
    int cnt = 0;
    for (char ch : keypad[digit]) {
        cnt += countWords(str, index + 1);
    }
    return cnt;
}

int main() {
    string str;
    cin >> str;

    vector<string> res;
    generateWords(str, "", res);

   
    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
        if (i != res.size() - 1) cout << " ";
    }
    cout << endl;

   
    cout << res.size() << endl;

    return 0;
}
