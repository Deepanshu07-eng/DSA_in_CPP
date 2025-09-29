/*
Using a helper stick (peg), shift all rings from peg A to peg B using peg C.
All rings are initally placed in ascending order, smallest being on top.
No bigger ring can be placed over a smaller ring
*/

#include<iostream>
using namespace std;
void TOH(int n, char src, char help, char des) {
	if (n == 0) return;

	TOH(n-1, src, des, help);

	cout<<"Moving ring "<<n<<" from "<<src<<" to "<<des<<endl;

	TOH(n-1, help, src, des);
}
int main() {
	int n; cin>>n;
	TOH(n, 'A', 'C', 'B');
	return 0;
}