#include <iostream>
#include <queue>
#include<climits>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int d) {
	if (!root) {
		root = new node(d);
		return root;
	}

	if (root->data > d) {
		root->left = insertInBST(root->left, d);
	}
	else {
		root->right = insertInBST(root->right, d);
	}
	return root;
}

node* createBST() {
	int data;
	cin >> data;
	node* root = NULL;
	while (data != -1) {
		root = insertInBST(root, data);
		cin >> data;
	}
	return root;
}


void preOrder(node* root) {
	if (!root) return;
	cout << root->data << ", ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << ", ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (!root) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

void levelOrderPrint(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x != NULL) {
			cout << x->data << " ";
			if (x->left != NULL) {
				q.push(x->left);
			}
			if (x->right != NULL) {
				q.push(x->right);
			}
		}
		else {
			cout << '\n';
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}

void printRange(node* root, int k1, int k2){
    if( !root) return;
    if( root -> data >= k1){
        printRange(root->left, k1, k2);
    }
    if( root -> data >= k1 and root-> data <= k2 )
     {
        cout<<root->data<<" ";
    }
    if(root-> data <= k2){
        printRange(root-> right, k1, k2);
    }
    
}

node* searchBST(node* root, int key){
    if(!root){
        return NULL;
    }
    if(root -> data == key){
        return root;

    }
    else if ( root -> data > key){
        return searchBST(root->left, key);
    }
    else{
        return searchBST(root->right, key);
    }
}

bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX)
{
    if(!root) return true;

    if(root -> data >= mi and root -> data <= mx and isBST(root->left) and isBST(root->right)){
        return true;
    }
    else{
        return false;
    }
}

class Pair{
public:
    int height;
    bool balanced;

};
Pair isBalanced(node* root){
    Pair p;
    if( !root){
        p.height = 0;
        p.balanced = true;
        return p;
    }
    Pair left = isBalanced(root->left);
    Pair right = isBalanced(root -> right);
    p.height = max(left.height, right.height)+1;
    if(abs(left.height - right.height) <= 1 and left.balanced and right.balanced){
        p.balanced = true;
    }
    else{
        p.balanced = false;
    }
    return p;
}
int main() {

	node* root = createBST();
    printRange(root, 5, 10);
    node* ans = searchBST(root, 5);
    if (ans) cout<<"Data Found"<<endl;
    else cout<<"Not Found"<<endl;

    Pair p = isBalanced(root);
    if (p.balanced) cout<<"Balanced"<<endl;
    else cout<<"Not balanced"<<endl;
	/*preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	levelOrderPrint(root);*/

	return 0;
}
