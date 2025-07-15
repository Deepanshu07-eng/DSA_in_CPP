/*Take the following as input.
A number
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

Write a function that returns its inverse, where inverse is defined as follows

Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

Print the value returned.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

   int inv=0;
   int pos =1;

    while(n > 0) {
        int digit = n % 10; 
		inv += pos*pow(10, digit - 1);
		pos ++;        
       
        n = n / 10;                
    }

    cout << inv;
    return 0;
}
