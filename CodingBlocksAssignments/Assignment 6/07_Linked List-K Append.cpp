/*
Given a linked list of length N and an integer K , append the last K elements of a linked list to the front. Note that K can be greater than N.


Input Format
First line contains a single integer N denoting the size of the linked list.
Second line contains N space separated integers denoting the elements of the linked list.
Third line contains a single integer K denoting the number of elements that are to be appended.


Constraints
1 <= N <= 10^4
1 <= K <= 10^4
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

// Insert node at tail
void insertAtTail(Node*& head, int data) {
    if (head == NULL) {
        head = new Node(data);
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = new Node(data);
}

// Function to append last K nodes to the front
Node* appendKNodes(Node* head, int k) {
    if (!head || k == 0) return head;

    // Step 1: Find length of list
    int len = 1;
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
        len++;
    }

    // Step 2: Normalize K
    k = k % len;
    if (k == 0) return head;

    // Step 3: Find new tail (len - k)th node
    Node* newTail = head;
    for (int i = 1; i < len - k; i++) {
        newTail = newTail->next;
    }

    // Step 4: Rearrange links
    Node* newHead = newTail->next;
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

// Function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtTail(head, x);
    }

    int k;
    cin >> k;

    head = appendKNodes(head, k);
    printList(head);

    return 0;
}
