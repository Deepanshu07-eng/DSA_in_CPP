//Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

#include<iostream>
using namespace std;

bool findx(int arr[][30], int n, int m, int x){
	for(int i=0; i<n;i++){
		for(int j=0; j<m; j++){
			if(arr[i][j] == x){
				return true;
			}
		}
	}
	return false;
} 


int main(){
	int n,m;
	cin>>n>>m;

	int arr[30][30];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	int x;
	cin>>x;

	if (findx(arr, n, m, x)) {
        cout << "1";
    } else {
        cout << "0";
    }

	return 0;
}