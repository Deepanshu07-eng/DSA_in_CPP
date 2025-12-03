/*
Given a binary tree. Print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even levels should be printed from right to left.


Input Format
Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL


Constraints
None


Output Format
Display the values in zigzag level order in which each value is separated by a space


Sample Input
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
Sample Output
10 30 20 40 50 60 73 
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

string lowerStr(const string &s) {
    string r = s;
    for (char &c : r) c = tolower(c);
    return r;
}

bool isNumber(const string &s) {
    if (s.empty()) return false;
    int i = 0;
    if (s[0] == '-' && s.size() > 1) i = 1;
    for (; i < (int)s.size(); ++i) if (!isdigit(s[i])) return false;
    return true;
}

bool malformed = false;

Node* buildTree(const vector<string>& nodes, int &i) {
    int n = nodes.size();
    if (i >= n) { malformed = true; return nullptr; }

    string token = lowerStr(nodes[i]);

    if (token == "false") {
        ++i;                 // consume "false"
        return nullptr;
    }

    int val;
    if (token == "true") {
        ++i;                 // consume "true"
        if (i >= n) { malformed = true; return nullptr; }
        if (!isNumber(nodes[i])) { malformed = true; return nullptr; }
        val = stoi(nodes[i++]); // consume value
    } else if (isNumber(nodes[i])) {
        // format: value (no true/false markers)
        val = stoi(nodes[i++]);
    } else {
        // unknown token -> malformed
        malformed = true;
        return nullptr;
    }

    Node* root = new Node(val);
    root->left = buildTree(nodes, i);
    root->right = buildTree(nodes, i);
    return root;
}

void zigZagTraversal(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;
    while (!q.empty()) {
        int sz = q.size();
        vector<int> level(sz);
        for (int k = 0; k < sz; ++k) {
            Node* cur = q.front(); q.pop();
            int idx = leftToRight ? k : (sz - 1 - k);
            level[idx] = cur->data;
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
        for (int x : level) cout << x << " ";
        leftToRight = !leftToRight;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> nodes;
    string tok;
    while (cin >> tok) nodes.push_back(tok);
    if (nodes.empty()) return 0;

    int idx = 0;
    Node* root = buildTree(nodes, idx);

    // If malformed input was detected or leftover tokens remain, do nothing (avoid runtime error).
    if (malformed) return 0;

    // Optional: if there are leftover tokens that may indicate bad input, you can treat as malformed.
    // if (idx != (int)nodes.size()) return 0;

    zigZagTraversal(root);
    return 0;
}

