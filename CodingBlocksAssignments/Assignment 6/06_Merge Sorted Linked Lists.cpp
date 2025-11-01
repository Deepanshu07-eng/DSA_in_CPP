/*
You are given two singly linked lists, each sorted in ascending order. Your task is to merge these two linked lists into one sorted linked list and return the head of the merged list.


Input Format
The first line contains an integer n — the size of the first linked list.
The second line contains n space-separated integers, representing the elements of the first linked list.
The third line contains an integer m — the size of the second linked list.
The fourth line contains m space-separated integers, representing the elements of the second linked list.

Constraints
0 ≤ n, m ≤ 105
-106 ≤ Node Value ≤ 106
The input linked lists are sorted in ascending order.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* mergeTwoLists(Node* l1, Node* l2)
{
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    Node* dummy = new Node(0);
    Node* tail = dummy;

    while (l1 && l2) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = (l1 ? l1 : l2);

    Node* head = dummy->next;
    delete dummy;
    return head;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n, m;
    cin >> n;
    Node* l1 = NULL;
    Node* tail1 = NULL;
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        Node* temp = new Node(val);
        if (!l1) l1 = tail1 = temp;
        else { tail1->next = temp; tail1 = temp; }
    }

    cin >> m;
    Node* l2 = NULL;
    Node* tail2 = NULL;
    for (int i = 0; i < m; i++) {
        int val; cin >> val;
        Node* temp = new Node(val);
        if (!l2) l2 = tail2 = temp;
        else { tail2->next = temp; tail2 = temp; }
    }

    Node* merged = mergeTwoLists(l1, l2);
    printList(merged);

    return 0;
}