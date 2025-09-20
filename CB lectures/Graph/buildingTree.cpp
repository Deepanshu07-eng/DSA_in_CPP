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
int countNode(node* root){

    if(!root) return 0;
    return countNode(root -> left) + countNode(root -> right) +1;
}


int height(node* root){

    if(!root)return 0;

    return max(height(root->left), height(root->right))+1;
}

int diameter(node* root){
    if(!root) return 0;
    int op1 = height(root->left) + height(root->right);
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1, max(op2,op3));

}
//8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
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

    cout<<"Total nodes = "<<countNode(root)<<endl;
    cout<<"Tree Height = "<<height(root)<<endl;
    cout<<"Tree Diameter = "<<diameter(root)<<endl;
    return 0;
}