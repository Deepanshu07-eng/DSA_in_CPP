/*
You are given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.


Input Format
First line contains N and X.
Second line contains the nodes of the Linked List.


Constraints
The number of nodes in the list is in the range [0, 200].
-100 <= Node.val <= 100
-200 <= x <= 200
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
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new Node(data);
}

// Function to partition the list
Node* partitionList(Node* head, int x) {
    Node* beforeStart = new Node(0); // dummy head for < x
    Node* beforeEnd = beforeStart;
    Node* afterStart = new Node(0);  // dummy head for >= x
    Node* afterEnd = afterStart;

    Node* curr = head;

    while (curr != NULL) {
        if (curr->data < x) {
            beforeEnd->next = curr;
            beforeEnd = beforeEnd->next;
        } else {
            afterEnd->next = curr;
            afterEnd = afterEnd->next;
        }
        curr = curr->next;
    }

    // End the 'after' list properly
    afterEnd->next = NULL;

    // Connect two parts
    beforeEnd->next = afterStart->next;

    // Return merged head
    return beforeStart->next;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n, x;
    cin >> n >> x;

    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertAtTail(head, val);
    }

    head = partitionList(head, x);

    printList(head);

    return 0;
}

