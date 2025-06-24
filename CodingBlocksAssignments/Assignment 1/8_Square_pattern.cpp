//Write a program to print square pattern by taking input N.

#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=i){
				cout<<i<<" ";
			}else{
				cout<<j<<" ";

			}

		}
		cout<<endl;

	}
	return 0;
}