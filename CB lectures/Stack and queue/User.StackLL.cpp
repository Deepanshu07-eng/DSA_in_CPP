#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() : data(0), next(NULL)
    { }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    Node (int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

class Stack {
    public:
    Node* head;

    Stack() : head(NULL)
    { }

    void push(int data) {
        if (head == NULL) {
            head = new Node(data);
            return;
        }
        Node* t = new Node(data);
        t->next = head;
        head = t;
    }

    void pop() {
        if (!head) return;
        else if (!head->next) {delete head; head = NULL;}
        else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    int top() {return head->data;}

    bool empty() {return head == NULL;}

};
int main() {
    Stack s;

    for (int i = 1; i < 5; i++) s.push(i);

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}