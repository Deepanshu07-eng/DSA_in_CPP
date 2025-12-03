/*
You are given two integer arrays preorder and inorder representing the preorder and inorder traversal of a binary tree, respectively. Your task is to reconstruct the binary tree and return its level order traversal.


Input Format
The first line contains an integer n, the number of nodes in the tree.
The second line contains n space-separated integers representing the preorder traversal of the tree.
The third line contains n space-separated integers representing the inorder traversal of the tree.

Constraints
1 ≤ n ≤ 105
1 ≤ Node.val ≤ 105

Output Format
Print the level order traversal of the reconstructed binary tree in a single line, with each node value separated by a space.


Sample Input
7
1 2 4 5 3 6 7
4 2 5 1 6 3 7
Sample Output
1 2 3 4 5 6 7

*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) { data = val; left = right = NULL; }
};

Node* build(vector<int>& pre, vector<int>& in, int s, int e, int& idx, unordered_map<int,int>& mp) {
    if (s > e) return NULL;
    int val = pre[idx++];
    Node* root = new Node(val);
    int pos = mp[val];
    root->left = build(pre, in, s, pos - 1, idx, mp);
    root->right = build(pre, in, pos + 1, e, idx, mp);
    return root;
}

int main() {
    int n; cin >> n;
    vector<int> pre(n), in(n);
    for (int i = 0; i < n; i++) cin >> pre[i];
    for (int i = 0; i < n; i++) cin >> in[i];
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++) mp[in[i]] = i;
    int idx = 0;
    Node* root = build(pre, in, 0, n - 1, idx, mp);

    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front(); q.pop();
        cout << curr->data << " ";
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
    return 0;
}
