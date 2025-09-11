#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

};

int main(){
    node* head, *tail;
    head = tail =NULL; // be default pointers me garbage nhi chhodte

    insertatfront(head, tail, 1);
    insertatend(head, tail, 1);
    printLL(head);


    return 0;
}

void insertatfront(node* &h, node* &t, int data){
    if(h == NULL){ 
        h = t = new node{data};

    }else{
        node* n = new node{data};    
        n -> next =h;
        h = n;
    }
}

void insertatend(node* &h, node* &t, int data){
    if(h == NULL){ 
        h = t = new node{data};

    }else{
        node* n = new node{data};    
        n -> next =h;
        h = n;
    }
}

void printLL(node* h){
    while(h != NULL){
        cout<<h->data<<"->";
        h=h->next;
    }
    cout<<"NULL\n";

}