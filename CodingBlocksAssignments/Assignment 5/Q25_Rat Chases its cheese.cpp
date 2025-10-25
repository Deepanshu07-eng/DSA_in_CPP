/*
You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from a position towards left, right, up or down on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M) where it's cheese is waiting for. If a path exists-it is always unique. Find that path and help the rat reach its cheese.


Input Format
First line contains 2 integers N and M denoting the rows and columns in the grid.
Next N line contains M characters each. An 'X' in position (i,j) denotes that the cell is blocked and ans 'O' denotes that the cell is empty.


Constraints
1 <= N , M <= 10


Output Format
Print N lines, containing M integers each. A 1 at a position (i,j) denotes that the (i,j)th cell is covered in the path and a 0 denotes that the cell is not covered in the path.
If a path does not exits then print "NO PATH FOUND"


Sample Input
5 4
OXOO
OOOX
XOXO
XOOX
XXOO
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPossible(vector<string>& board, int n, int m, int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m) return false;
    if (board[i][j] == 'X') return false;
    return true;
}

bool path(vector<string>& board, vector<vector<int>>& sol, int n, int m, int i = 0, int j = 0) {
    if (i == n - 1 && j == m - 1) {
        sol[i][j] = 1;
        return true;
    }

    if (!isPossible(board, n, m, i, j)) return false;

    if (sol[i][j] == 1) return false; // avoid infinite loop
    sol[i][j] = 1;

    // right
    if (path(board, sol, n, m, i, j + 1)) return true;

    // down
    if (path(board, sol, n, m, i + 1, j)) return true;

    // left
    if (path(board, sol, n, m, i, j - 1)) return true;

    // up
    if (path(board, sol, n, m, i - 1, j)) return true;

    sol[i][j] = 0; // backtrack
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> board(n);
    for (int i = 0; i < n; i++) cin >> board[i];

    vector<vector<int>> sol(n, vector<int>(m, 0));

    if (path(board, sol, n, m)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "NO PATH FOUND";
    }

    return 0;
}