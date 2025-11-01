/*
Given a singly linked list delete all nodes which are having a greater value among any of the nodes residing on the right side.


Input Format
First line contains N, the number of nodes in the linked list.
Next line contains the N nodes data .


Constraints
0<N<10^9
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

 
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

 
Node* deleteNodes(Node* head) {
     
    head = reverse(head);

    Node* curr = head;
    int maxSoFar = curr->data;
    Node* temp = head;

    while (curr != NULL && curr->next != NULL) {
        if (curr->next->data < maxSoFar) {
             
            Node* del = curr->next;
            curr->next = curr->next->next;
            delete del;
        } else {
            curr = curr->next;
            maxSoFar = curr->data;
        }
    }

    
    head = reverse(head);
    return head;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;

    int data;
    cin >> data;
    Node* head = new Node(data);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }

    head = deleteNodes(head);
    printList(head);

    return 0;
}
