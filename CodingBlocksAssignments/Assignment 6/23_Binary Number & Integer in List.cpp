/*
You are given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
Print the decimal value of the number in the linked list.
The most significant bit is at the head of the linked list.


Here you can check how a binary number can be converted to a decimal value: https://www.wikihow.com/Convert-from-Binary-to-Decimal


Input Format
First line contains N length of the Linked List.
Second line contains N nodes of the Linked List.
*/

#include <iostream>
using namespace std;

// Define the structure for a linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to convert binary linked list to decimal
int getDecimalValue(Node* head) {
    int num = 0;
    Node* current = head;
    while (current != nullptr) {
        num = num * 2 + current->data; // Shift left by 1 and add current bit
        current = current->next;
    }
    return num;
}

int main() {
    int N;
    cin >> N;

    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < N; i++) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    cout << getDecimalValue(head) << endl;

    return 0;
}
