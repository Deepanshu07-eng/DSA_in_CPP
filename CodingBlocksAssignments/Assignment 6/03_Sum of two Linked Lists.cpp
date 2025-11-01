/*
Given two numbers represented by two linked lists, write a program that prints the sum list. The sum list is linked list representation of addition of two input numbers in linked lists. It is not allowed to modify the lists. Also, not allowed to use explicit extra space (Use Recursion).


Input Format
First line contains N,M, number of nodes in the 1st and 2nd list.
Next line contains N nodes of 1st list.
Next line contains M nodes of 2nd list.


Constraints
0<N<10^6
*/

#include<iostream>
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

class LinkedList {
    public:
    Node* head, *tail;
    
    LinkedList() {
        head = tail = NULL;
    }
    void printLL() {
        Node* h = head;
        while (h != NULL) {
            cout<<h->data <<" ";
            h = h->next;
        }
    }

    void push_back(int data) {
        if (head == NULL) {
            head = tail = new Node(data);
            return;
        }
        Node* n = new Node(data);
        tail->next = n;
        tail = n;
    }
	
};


Node* reverseLL(Node* h) {
	Node* c = h;
	Node* p = NULL;
	Node* n;

	while (c) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	return p;
}

LinkedList addNum(Node* first, Node* second) {
	int carry = 0;
	
	LinkedList ans;

	while(first || second || carry != 0) {

		int a = 0, b = 0;
		if(first) a = first->data;
		if(second) b = second->data;

		int sum = a + b + carry;

		int x = sum % 10;
		ans.push_back(x);

		carry = sum / 10;
		
		if(first) first = first->next;
		if(second) second = second->next;
	}

	return ans;
}
LinkedList sumLL(Node* l1, Node* l2) {
	Node* first = reverseLL(l1);
	Node* sec = reverseLL(l2);

	LinkedList ans = addNum(first, sec);

	ans.head = reverseLL(ans.head);

	return ans;
}

int main () {
	int n, m;
	cin>>n>>m;

	LinkedList l1, l2;
	while(n--) {
		int x; cin>>x;
		l1.push_back(x);
	}

	while(m--) {
		int x; cin>>x;
		l2.push_back(x);
	}
	LinkedList l3;
	l3 = sumLL(l1.head, l2.head);
	l3.printLL();


	return 0;
}