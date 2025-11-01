/*
Given three linked lists, say a, b and c, find one node from each list such that the sum of the values of the nodes is equal to a given number say, Target. As any number of answers can be possible return the first one you get while traversing.


Input Format
The First Line contains 3 Integers n, m and k as the Size of the Three LinedLists. Next 3 Lines contains n, m and k integers Respectively as the elements of Linked Lists. Next Line contains the an Integer as Target.


Constraints
The Size of the Lists can be different.
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

// Function to insert node at the end of a linked list
void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

// Function to find triplet sum = target
void findTriplet(Node* a, Node* b, Node* c, int target) {
    for (Node* p = a; p != NULL; p = p->next) {
        for (Node* q = b; q != NULL; q = q->next) {
            for (Node* r = c; r != NULL; r = r->next) {
                if (p->data + q->data + r->data == target) {
                    cout << p->data << " " << q->data << " " << r->data;
                    return;
                }
            }
        }
    }
    cout << "No combination found";
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    Node *a = NULL, *b = NULL, *c = NULL;

    // Input for list a
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        insert(a, val);
    }

    // Input for list b
    for (int i = 0; i < m; i++) {
        int val; cin >> val;
        insert(b, val);
    }

    // Input for list c
    for (int i = 0; i < k; i++) {
        int val; cin >> val;
        insert(c, val);
    }

    int target;
    cin >> target;

    findTriplet(a, b, c, target);

    return 0;
}
