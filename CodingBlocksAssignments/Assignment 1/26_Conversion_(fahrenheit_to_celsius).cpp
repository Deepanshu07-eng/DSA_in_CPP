/*
Take the following as input.

Minimum Fahrenheit value
Maximum Fahrenheit value
Step

Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
0 -17
20 -6
40 4
60 15
80 26
100 37
*/

#include<iostream>
using namespace std;
int main() {
	int init, fval, steps, far, cel;
	cin>>init>>fval>>steps;

	far = init;

	while(far<=fval){
		cel= (5/9.0)*(far -32);
		cout<<far<<" "<<cel<<'\n';
		far=far+steps;
	}
	return 0;
}
