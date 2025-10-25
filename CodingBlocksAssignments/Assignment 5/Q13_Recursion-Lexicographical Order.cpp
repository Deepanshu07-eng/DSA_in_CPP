/*
Take as input N, a number. Write a recursive function which prints counting from 0 to N in lexicographical order. In lexicographical (dictionary) order 10, 100 and 109 will be printed before 11.


Input Format
Enter a number N.


Constraints
None


Output Format
Display all the numbers upto N in a lexicographical order


Sample Input
10
*/

#include <iostream>
using namespace std;

void dfs(int curr, int n) {
    if (curr > n) return;
    cout << curr << " ";

    for (int i = 0; i <= 9; i++) {
        int next = curr * 10 + i;
        if (next <= n && next != 0) {
            dfs(next, n);
        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << 0 << " ";
    for (int i = 1; i <= 9; i++) {
        dfs(i, n);
    }
	return 0;
}