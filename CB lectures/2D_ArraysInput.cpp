#include <iostream>
using namespace std;

int main() {
    int a[10][10];
    int n, m;

    cout << "Enter rows (max 10) and columns (max 10): ";
    cin >> n >> m;

    int number = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = number++;
        }
    }

    cout << "\nThe 2D array is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}
