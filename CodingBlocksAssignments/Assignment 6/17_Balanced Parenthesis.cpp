/*
You are given a string containing just the characters '(', ')', '{', '}', '[', and ']'. Your task is to determine if the input string is valid. A string is considered valid if:

Open brackets are closed by the same type of brackets.
Open brackets are closed in the correct order.
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        else {
            if (st.empty()) return false;
            
            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    if (isValid(s)) cout << "true";
    else cout << "false";
    return 0;
}
