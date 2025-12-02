/*
Given a binary tree , print the nodes in left to right manner as visible from above the tree


Input Format
Level order input for the binary tree will be given.


Constraints
No of nodes in the tree can be less than or equal to 10^7


Output Format
A single line containing space separated integers representing the top view of the tree


Sample Input
1 2 3 4 5 6 -1 -1 -1 -1 -1 -1 -1
Sample Output
4 2 1 3
*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr;
    int x;

    // Read level order input
    while (cin >> x) {
        arr.push_back(x);
    }

    if (arr.size() == 0 || arr[0] == -1) return 0;

    // Build Tree using Queue
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size()) {
        Node* curr = q.front();
        q.pop();

        if (arr[i] != -1) {
            curr->left = new Node(arr[i]);
            q.push(curr->left);
        }
        i++;

        if (i < arr.size() && arr[i] != -1) {
            curr->right = new Node(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    // -------- TOP VIEW LOGIC ----------
    map<int, int> topView;
    queue<pair<Node*, int>> qq;
    qq.push({root, 0});

    while (!qq.empty()) {
        auto p = qq.front();
        qq.pop();

        Node* node = p.first;
        int hd = p.second;

        if (topView.find(hd) == topView.end()) {
            topView[hd] = node->data;
        }

        if (node->left)
            qq.push({node->left, hd - 1});

        if (node->right)
            qq.push({node->right, hd + 1});
    }

    // Print left to right
    for (auto &it : topView) {
        cout << it.second << " ";
    }

    return 0;
}
