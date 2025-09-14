#include <iostream>
#include<vector>
using namespace std;

class CQ {
    public:
    int N;
    int* v;
    int f, end;
    int sz;

    CQ(int s) {
        N = s;
        v = new int[s];
        f = 0;
        end = N-1;
        sz = 0;
    }

    void insert(int data) {
        if (sz > N) {cout<<"Overflow"<<endl;return;}
        end = (end+1) % N;
        v[end] = data;
        sz++;
    }

    void pop() {
        if (sz == 0) {cout<<"Underflow"<<endl; return;}
        f = (f+1)% N;
        sz--;
    }

    int front() {
        return v[f];
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }
};
int main() {
    CQ q(4);

    for (int i = 0; i < 4; i++) q.insert(i);

    while (!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}