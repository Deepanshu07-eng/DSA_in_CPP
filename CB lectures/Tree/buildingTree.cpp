#include<iostream>
#include<queue>
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
class Pair {
    public:
    int height;
    int dia;
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

Pair fastDiameter(node* root) {
    Pair p;
    if (!root) {
        p.height = p.dia = 0;
        return p;
    }

    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height, right.height) +1;

    int op1 = left.height + right.height;
    int op2 = left.dia;
    int op3 = right.dia;

    p.dia = max(op1, max(op2, op3));

    return p;
}

node* searchNode(node* root, int key){
    if(!root) return NULL ;

    if(root -> data == key) return root;

    node* ans = searchNode(root -> left, key);
    if(ans != NULL) return ans;

    return searchNode(root->right, key);

}
void levelOrderPrint(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* x= q.front();
        q.pop();
        if(x != NULL){
            cout<<x->data<<" ";
            if(x->left != NULL) q.push(x->left);

            if(x->right != NULL) q.push(x->right);

            
        }
        else{
            cout<<'\n';
            if(!q.empty()) q.push(NULL);
        }
    }

}
void mirror(node* root){
    if(!root){
        return;


    }
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root-> right);

}
int pre[] = {8,10,1,6,4,7,3,14,13};
int k=0;

node* createTree(int *in, int s, int e){
    if (s>e) return NULL;

    node* root  = new node(pre[k++]);
    int j;
    for(int i=s; i<=e; i++ ){
        if(in[i] == root -> data){
            j=i;
            break;
        }
    }
    root -> left = createTree(in, s, j-1);
    root -> right = createTree(in, j+1, e);
    return root;

}

//8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {
    int in[]= {1, 10, 4, 6, 7,8,3,13,14};
    int n= sizeof(in)/sizeof(int);

    node* root = createTree(in, 0, n-1);


    /*cout<<"Preorder:";
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

    Pair p = fastDiameter(root);
    cout<<"Fast height = "<<p.height<<endl;
    cout<<"Fast Diameter = "<<p.dia<<endl;

    cout<<"Level order: \n";
    levelOrderPrint(root);
    
    if(searchNode(root, 5)) cout<<"Key Found"<<endl;
    else cout<<"Not Present"<<endl;

    cout<<"Level order: \n";
    levelOrderPrint(root);

    mirror(root);
*/
    cout<<"level order: \n";
    levelOrderPrint(root);
    return 0;
}