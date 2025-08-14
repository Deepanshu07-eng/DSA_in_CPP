//Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

#include<iostream>
using namespace std;
int main() {
	int row;
	cin>>row;
	int col=row;

	int a[row][col];
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<row; i++){
		for(int j=i+1; j<col; j++){
			swap(a[i][j], a[j][i]);
		}
	}
	
	for(int j=0; j<col; j++){
		for(int i=0; i<row/2; i++){
			swap(a[i][j], a[row-i-1][j]);
		}
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}