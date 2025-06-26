/*
Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;

    int original = num,temp =num, n=0, sum=0;

    if(n<0 || n> 1000000000) return 0;
    
    while(temp>0){
        temp/= 10;
        n++;
    }
    temp = num;
    while(temp>0){
        int digit =temp % 10;
        sum += pow(digit,n);
        temp /= 10;
    }

    cout<<(sum == original ? "true" : "false")<<endl;

    return 0;
}