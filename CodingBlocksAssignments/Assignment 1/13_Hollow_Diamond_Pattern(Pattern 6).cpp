/*Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *     */

#include<iostream>
using namespace std;
int main() {

	int n; 
	cin>> n;

	for (int i = 1; i <= n; i++) {
		int star, space;
		if (i > n/2) {
			space = 2*(n-i)-1;
			star = (n-space)/2;
		} else {
			space = 2*i - 3;
			star = (n-space)/2;
		}
		if (i == 1 || i == n) space = 0;
		for (int j = 1; j <= star; j++) {
			cout<<"*\t";
		}
		for (int j = 1; j <= space; j++) {
			cout<<" \t";
		}
		for (int j = 1; j <= star; j++) {
			if (space == 0 && j == star) break;
			cout<<"*\t";
		}
		cout<<endl;
	}

	return 0;
}