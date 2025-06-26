/*Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	if (n % 2 == 0) return 0;

	for (int i = 1; i <= n; i++) {
        int space1, space2, num, print;
		if (i > n/2+1) {
			space1 = 2*i - n - 1;
			num = n-i+1;
            print = num;
			space2 = 2*(n-i)-1;
		} else {
			space1 = n - 2*i + 1;
			num = i;
            print = num;
			space2 = 2*i - 3;
		}
		if (i == 1 || i == n) {
			space1 = n-1;
			num = 1;
            print = 1;
			space2 = 0;
		}
		for (int j = 1; j <= space1; j++) {
			cout<<"  ";
		}
		for (int j = 1; j <= num; j++) {
			cout<<print--<<" ";
		}
		for (int j = 1; j <= space2; j++) {
			cout<<"  ";
		}
        int print2 = 1;
		for (int j = 1; j <= num; j++) {
            if (space2 == 0 && j == num) break;
			cout<<print2++<<" ";
		}
        cout<<endl;
	}

	return 0;
}
