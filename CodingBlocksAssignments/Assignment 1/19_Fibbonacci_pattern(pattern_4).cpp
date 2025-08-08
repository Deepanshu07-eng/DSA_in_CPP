/*Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if(n<0 || n>100) return 0;

	int first =1, second=1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(i<=2 ){
				cout<<i-1<<"\t";
			}
			else{
				int sum = first + second;
				cout<<sum<<"\t";
				first = second;
				second = sum;
			}

		}
		cout<<endl;

	}

	return 0;
}