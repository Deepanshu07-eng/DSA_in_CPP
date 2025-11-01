/*
Given a head to Linked List L, write a function to reverse the list taking k elements at a time. Assume k is a factor of the size of List.

You need not have to create a new list. Just reverse the old one using head.


Input Format
The first line contains 2 space separated integers N and K

The next line contains N space separated integral elements of the list.


Constraints
0 <= N <= 10^6 0 <= K <= 10^6
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

// Function to insert node at tail
void insertAtTail(Node*& head, int data) {
    if (head == NULL) {
        head = new Node(data);
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

// Function to reverse in groups of k
Node* kReverse(Node* head, int k) {
    if (!head) return NULL;

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    // Step 1: Reverse first k nodes
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Step 2: Recursively call for the rest
    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    // prev becomes new head of this reversed group
    return prev;
}

// Function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtTail(head, x);
    }

    head = kReverse(head, k);

    printList(head);
    return 0;
}

