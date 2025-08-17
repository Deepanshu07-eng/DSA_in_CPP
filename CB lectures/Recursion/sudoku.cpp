#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int a[][9], int i, int j, int n, int num) {

    for (int k = 0; k < n; k++) {
        if ((a[k][j] == num) || (a[i][k] == num)) return false;
    }
    
    n = sqrt(n);
    int si = (i / n) * n;
    int sj = (j / n) * n;
    for (int row = si; row < si+n; row++) {
        for (int col = sj; col < sj+n; col++) {
            if (a[row][col] == num) return false;
        }
    }
    return true;
}
void printSudoku(int a[][9], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"  "<<endl;
    }
}
bool sudoku(int a[][9], int i, int j, int n) {

    if (i == n) {
        printSudoku(a, n);
        return true;
    }

    if (j == n) return sudoku(a, i+1, 0, n);

    if (a[i][j] != 0) return sudoku(a, i, j+1, n);

    for (int num = 1; num <= n; num++) {
        if (isSafe(a, i, j, n, num)) {
            a[i][j] = num;
            if (sudoku(a, i, j+1, n)) return true;
            a[i][j] = 0;
        }
    }
    return false;
}
int main() {
    int a[9][9] = {
        {7, 8, 0, 4, 0, 0, 1, 2, 0},
        {6, 0, 0, 0, 7, 5, 0, 0, 9},
        {0, 0, 0, 6, 0, 1, 0, 7, 8},
        {0, 0, 7, 0, 4, 0, 2, 6, 0},
        {0, 0, 1, 0, 5, 0, 9, 3, 0},
        {9, 0, 4, 0, 6, 0, 0, 0, 5},
        {0, 7, 0, 3, 0, 0, 0, 1, 2},
        {1, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 4, 9, 2, 0, 6, 0, 0, 7}
    };
    sudoku(a, 0, 0, 9);
    return 0;
}