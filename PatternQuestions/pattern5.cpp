/*
init= 1 ;
fval= 10 ;
step= 2 ;
1 -17
3 -16
5 -15
7 -13
9 -12
*/


#include<iostream>
using namespace std;
int main() {
	int init, fval, step, far, cel;
	cin>>init>>fval>>step;

	far = init;

	while(far<=fval){
		cel= (5/9.0)*(far -32);
		cout<<far<<" "<<cel<<'\n';
        far=far+step;
	}
    
	return 0;
}