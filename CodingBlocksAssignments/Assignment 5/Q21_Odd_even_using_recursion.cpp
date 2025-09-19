/*
Take as input N, a number. Print odd numbers in decreasing sequence (up until 0) and even numbers in increasing sequence (up until N) using Recursion
*/

#include<iostream>
using namespace std;

void printodd(int n){
	if(n==0) return ;

	if(n %2 != 0){
		cout<<n<<endl;
		printodd(n-1);
	}
	else{
		printodd(n-1);
		cout<<n<<endl; 
	}

}

int main() {
	int n;
	cin>>n;

	printodd(n);
	return 0;
}