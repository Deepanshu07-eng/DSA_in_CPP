#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left, *right;
    node(int d){
        data =d;
        left = right=NULL;
    }
};
node* buildTree(){
    int d;
    cin>>d;
    if ( d == -1) return NULL;

    node* root = new node(d);
    root -> left = buildTree();
    root-> right = buildTree();
    return root;
}

void preOrder(node* root){
    if(!root) return;
    cout<<root->data<<" ";
    preOrder(root-> left);
    preOrder(root->right);

}

void inOrder(node* root){
    if(!root) return;
   
    inOrder(root-> left);
     cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(node* root){
    if(!root) return;
    
    postOrder(root-> left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main() {
    cout<<"Enter input: ";
    
    node* root = buildTree();

    cout<<"Preorder:";
    preOrder(root);
    cout<<endl;
    cout<<"Inorder: ";
    inOrder(root);
    cout<<endl;
    cout<<"Postorder: ";
    postOrder(root);
    cout<<endl;
    return 0;
}