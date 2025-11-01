/*
Implement a Queue using two stacks Make it Dequeue efficient.


Input Format
Enter the size of the queue N add 0 - N-1 numbers in the queue
*/

#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    // Enqueue operation (O(N))
    void enqueue(int x) {
        // Move all elements from s2 to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }

        // Push new element into s1
        s1.push(x);

        // Move everything back to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    // Dequeue operation (O(1))
    void dequeue() {
        if (s2.empty()) return; // queue underflow
        s2.pop();
    }

    // Front element
    int front() {
        if (s2.empty()) return -1;
        return s2.top();
    }

    bool empty() {
        return s2.empty();
    }
};

int main() {
    int n;
    cin >> n;

    Queue q;
    for (int i = 0; i < n; i++) {
        q.enqueue(i);
    }

    // Display dequeued order
    while (!q.empty()) {
        cout << q.front() << " ";
        q.dequeue();
    }

    return 0;
}

