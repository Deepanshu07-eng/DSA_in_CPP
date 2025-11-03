/*
Kartik sir loves coding. Hence, he took up the position of an instructor and founded Coding Blocks, a startup that serves students with awesome code modules. It is a very famous place and students are always queuing up to have one of those modules. Each module has a cost associated with it. The modules are kept as a pile. The job of an instructor is very difficult. He needs to handle two types of queries:

1) Student Query: When a student demands a module, the code module on the top of the pile is given and the student is charged according to the cost of the module. This reduces the height of the pile by 1. In case the pile is empty, the student goes away empty-handed.

2) Instructor Query: Sir prepares a code module and adds it on top of the pile. And reports the cost of the module. Help him manage this process.


Input Format
First line contains an integer Q, the number of queries. Q lines follow. A Type-1 ( Student ) Query, is indicated by a single integer 1 in the line. A Type-2 ( Instructor ) Query, is indicated by two space separated integers 2 and C (cost of the module prepared) .
*/


#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;
    stack<int> s;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 2) {
            int cost;
            cin >> cost;
            s.push(cost);
        } 
        else if (type == 1) {
            if (s.empty()) {
                cout << "No Code\n";
            } else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
    }

    return 0;
}
