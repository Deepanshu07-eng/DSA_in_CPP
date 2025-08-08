/*
n= 5;
1 
1 4
1 4 9
1 4 9 16
1 4 9 16 25

*/

#include<iostream>
using namespace std;

int main () {
	int n;
	cin>>n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<< j * j << " ";

		}
		cout<<endl;
	}
	return 0;
}