/*Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

*/

#include<iostream>
using namespace std;

int main() {
	int n1, n2;
	cin>>n1>>n2;
	if(n1<0|| n1>100|| n2<0|| n2>100 ) return 0;

	for(int i=1; i<=n1; i++){
		int ans= 3*i+2;
		if(ans % n2 ==0){
			n1++;
		}else{
			cout<<ans<<endl;
		}
	}
	return 0;
}