//Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n<0 || n >1000000000 ) return 0;
	int sumodd=0, sumeven =0, digit =1;

	while(n>0){
		if(digit %2 != 0){
			sumodd += n%10;

		}else{
			sumeven += n%10;
		}
		digit++;
		n/=10;
	}
	cout<<sumodd<<endl;
	cout<<sumeven<<endl;
	return 0;
}