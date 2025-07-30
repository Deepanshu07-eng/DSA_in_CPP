// This ia also called Factorial of 5!.

#include<iostream>
using namespace std;

int prod(int n){
    if(n==1) return 1;
    return n*prod(n-1); //NON TAIL RECUSRION
}

int main(){
    int n;
    cin>>n;

    cout<<prod(n)<<endl;

    return 0;


}