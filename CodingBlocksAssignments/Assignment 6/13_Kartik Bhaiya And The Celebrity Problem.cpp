/*
Kartik Bhaiya, mentor at Coding Blocks, organized a party for their interns at Coding Blocks. In a party of N people, only one person is known to everyone. Such a person may be present in the party, if yes, she/he doesn’t know anyone in the party. We can only ask questions like “does A know B? “.
Find the stranger (celebrity) in minimum number of questions.


Input Format
First line contains N, number of persons in party. Next line contains the matrix of N x N which represents A knows B when it's value is one.


Constraints
None
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool knows(vector<vector<int>>& M, int a, int b) {
    return M[a][b] == 1;
}

int findCelebrity(vector<vector<int>>& M, int n) {
    stack<int> s;

    for (int i = 0; i < n; i++) {
        s.push(i);
    }

    while (s.size() > 1) {
        int A = s.top(); s.pop();
        int B = s.top(); s.pop();

        if (knows(M, A, B)) {
            
            s.push(B);
        } else {
            
            s.push(A);
        }
    }

    int candidate = s.top();
    s.pop();

    
    for (int i = 0; i < n; i++) {
        if (i != candidate) {
           
            if (knows(M, candidate, i))
                return -1;
           
            if (!knows(M, i, candidate))
                return -1;
        }
    }

    return candidate;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> M(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }

    int ans = findCelebrity(M, n);

    if (ans == -1)
        cout << "No Celebrity";
    else
        cout << ans;

    return 0;
}
