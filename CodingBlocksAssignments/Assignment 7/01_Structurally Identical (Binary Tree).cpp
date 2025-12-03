/*
Given two trees check if they are structurally identically. Structurally identical trees are trees that have same structure. They may or may not have the same data though.


Input Format
Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL


Constraints
1 <= N <= 10^4


Output Format
Display the Boolean result


Sample Input
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
Sample Output
true
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = right = NULL;
    }
};

// Fixed build function
Node* buildTree() {
    string s;
    cin >> s;

    if (s == "false") return NULL;  // Base case

    int d = stoi(s); // "true" is not used — directly read integer nodes
    Node* root = new Node(d);

    string l, r;
    cin >> l;
    if (l == "true") root->left = buildTree();
    else root->left = NULL;

    cin >> r;
    if (r == "true") root->right = buildTree();
    else root->right = NULL;

    return root;
}

bool isStructurallyIdentical(Node* root1, Node* root2) {
    if (!root1 && !root2) return true;
    if (!root1 || !root2) return false;
    return isStructurallyIdentical(root1->left, root2->left) &&
           isStructurallyIdentical(root1->right, root2->right);
}

int main() {
    Node* root1 = buildTree();
    Node* root2 = buildTree();

    cout << (isStructurallyIdentical(root1, root2) ? "true" : "false");
    return 0;
}
