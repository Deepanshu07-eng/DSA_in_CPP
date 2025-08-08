/*
Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

*/

#include<iostream>
using namespace std;
int lcm(int a, int b) {
        int gcd = 1, lcm = 1, max;
		if (a > b) max = a;
		else max = b;
        for (int i = 1; i <= max/2; i++) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }
        lcm = (a*b) / gcd;
        return lcm;
    }
int main() {
	int n1, n2;
	cin>>n1>>n2;

	if ((n1 < 0 || n2 < 0) || n1 > 1000000000 || n2 > 1000000000) return 0;

	cout<<lcm(n1,n2);
	return 0;
}