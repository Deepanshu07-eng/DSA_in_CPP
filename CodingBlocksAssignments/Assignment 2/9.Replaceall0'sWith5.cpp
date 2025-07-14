// Given an integer N, now you have to convert all zeros of N to 5

#include<iostream>
using namespace std;
int main () {
	int num;
	cin>>num;
	int newNum = num, factor =1;

	while(num>0){
		int digit = num %10;
		if(digit==0){
			 newNum += 5*factor;
		}
		 factor*=10; num /=10;
	}
		cout<<newNum<<' ';
		 
	return 0;
}
