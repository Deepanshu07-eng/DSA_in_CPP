/*
There are N processes to be completed. All the processes have a unique number assigned to them from 1 to N.

Now, we are given two things:

1)The calling order in which all the processes are called.
2)The ideal order in which all the processes should have been executed.

Executing a process takes 1 unit of time. Changing the position takes 1 unit of time.

We have to find out the unit of time required to complete all the process such that a process is executed from the ideal order only when it exists at the same index in the calling order. We can push the first term from the calling order to the last thus rotating the order.


Input Format
First line contains a single integer N.
Next line contains N space separated integers denoting the calling order.
Last line contains N space separated integers denoting the ideal order.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> calling, ideal;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        calling.push(x);
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ideal.push(x);
    }

    int time = 0;

    while (!ideal.empty()) {
        if (calling.front() == ideal.front()) {
           
            calling.pop();
            ideal.pop();
            time++; 
        } else {
            int front = calling.front();
            calling.pop();
            calling.push(front);
            time++; 
        }
    }

    cout << time;
    return 0;
}
