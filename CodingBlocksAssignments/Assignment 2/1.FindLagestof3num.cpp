// Input three numbers, print the largest of these numbers

#include<iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;

	int largest;
	if(a>b){
		cout<<a;
	}else if(b>c){
		cout<<b;
	}
	else{
		cout<<c;
	}
	return 0;
}