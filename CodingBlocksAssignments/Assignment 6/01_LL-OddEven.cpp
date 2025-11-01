/*
Given a list, modify it such that all odd elements appear before the even ones. The order of odd elements and even shall remain intact.

link

See explanation for more info.


Input Format
The first line contains an integer N, the number of elements in the list.

The next line contains N space separated integral elements of the list.


Constraints
1 <= T <= 1000 0 <= N <= 10^6
*/

#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert node at the end
void insertAtEnd(Node*& head, int val) {
    if (head == NULL) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = new Node(val);
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to rearrange odd and even valued nodes (stable order)
Node* rearrangeOddEven(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* oddHead = NULL;   // head of odd list
    Node* oddTail = NULL;   // tail of odd list
    Node* evenHead = NULL;  // head of even list
    Node* evenTail = NULL;  // tail of even list

    Node* curr = head;

    while (curr != NULL) {
        if (curr->data % 2 != 0) {  // odd
            if (oddHead == NULL) {
                oddHead = oddTail = curr;
            } else {
                oddTail->next = curr;
                oddTail = oddTail->next;
            }
        } else {  // even
            if (evenHead == NULL) {
                evenHead = evenTail = curr;
            } else {
                evenTail->next = curr;
                evenTail = evenTail->next;
            }
        }
        curr = curr->next;
    }

    // If no odd elements, return even list
    if (oddHead == NULL) return evenHead;
    // If no even elements, return odd list
    if (evenHead == NULL) return oddHead;

    // Connect odd list to even list
    oddTail->next = evenHead;
    evenTail->next = NULL; // important to end list

    return oddHead;
}

int main() {
    int n;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtEnd(head, x);
    }

    head = rearrangeOddEven(head);
    printList(head);

    return 0;
}
