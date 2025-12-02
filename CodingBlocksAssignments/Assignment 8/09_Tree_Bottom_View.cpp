/*
Given a binary tree , print the nodes in left to right manner as visible from below the tree


Input Format
Level order input for the binary tree will be given.


Constraints
No of nodes in the tree can be less than or equal to 10^7


Output Format
A single line containing space separated integers representing the bottom view of the tree


Sample Input
1 2 3 4 5 6 -1 -1 -1 -1 -1 -1 -1
Sample Output
4 2 6 3
*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) { data = x; left = right = NULL; }
};

Node* buildTree(const vector<int> &arr) {
    if (arr.empty() || arr[0] == -1) return NULL;
    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < (int)arr.size()) {
        Node* cur = q.front(); q.pop();
        if (i < (int)arr.size()) {
            int v = arr[i++];
            if (v != -1) {
                cur->left = new Node(v);
                q.push(cur->left);
            }
        }
        if (i < (int)arr.size()) {
            int v = arr[i++];
            if (v != -1) {
                cur->right = new Node(v);
                q.push(cur->right);
            }
        }
    }
    return root;
}

int main() {
    vector<int> arr;
    int x;
    while (cin >> x) arr.push_back(x);

    Node* root = buildTree(arr);
    if (!root) return 0;

    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        auto p = q.front(); q.pop();
        Node* node = p.first;
        int hd = p.second;
        mp[hd] = node->data;
        if (node->left) q.push({node->left, hd - 1});
        if (node->right) q.push({node->right, hd + 1});
    }

    bool first = true;
    for (auto &it : mp) {
        if (!first) cout << " ";
        cout << it.second;
        first = false;
    }
    return 0;
}
