#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int **a = new int*[n];   // allocate rows
    for(int i=0; i<n; i++){
        a[i] = new int[m];   // allocate columns
    }

    // fill array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = i + j;
        }
    }

    // print array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // free memory
    for(int i=0; i<n; i++){
        delete[] a[i];
    }
    delete[] a;
}


