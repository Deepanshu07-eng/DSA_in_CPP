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
*/


#include<iostream>
#include<string>
using namespace std;
void decode(string num, int idx, string curr) {
    if (idx == num.size()) {
        cout << curr << endl;
        return;
    }

    int one = num[idx] - '0';
    if (one >= 1 && one <= 9) {
        char ch = 'A' + one - 1;
        decode(num, idx + 1, curr + ch);
    }

    if (idx + 1 < num.size()) {
        int two = (num[idx] - '0') * 10 + (num[idx+1] - '0');
        if (two >= 10 && two <= 26) {
            char ch = 'A' + two - 1;
            decode(num, idx + 2, curr + ch);
        }
    }
}

int main() {
    string num;
    cin >> num;
    decode(num, 0, "");
    return 0;
}