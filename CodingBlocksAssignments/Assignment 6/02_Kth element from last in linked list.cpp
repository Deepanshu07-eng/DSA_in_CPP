/*
Given a linked list with n nodes. Find the kth element from last without computing the length of the linked list.


Input Format
First line contains space separated integers representing the node values of the linked list. The list ends when the input comes as '-1'. The next line contains a single integer k.


Constraints
n < 10^5


Output Format
Output a single line containing the node value at the kth element from last.
*/

#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    int val;
    
    // Read linked list until -1
    cin >> val;
    if (val == -1) return 0;

    Node* head = new Node(val);
    Node* tail = head;

    while (cin >> val && val != -1) {
        tail->next = new Node(val);
        tail = tail->next;
    }

    int k;
    cin >> k;

    // Two pointer approach
    Node* first = head;
    Node* second = head;

    // Move first pointer k steps ahead
    for (int i = 0; i < k; i++) {
        if (first == nullptr) {
            cout << "List has fewer than k elements." << endl;
            return 0;
        }
        first = first->next;
    }

    // Move both pointers until first reaches the end
    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }

    cout << second->data << endl;

    return 0;
}
