#include<iostream>
using namespace std;

bool check(int arr, int n, int a, int i=0){
    if(n==0) return false;

    if(arr[i]==7) return true;

    else check(a, n, i+1);
    return false;
}

int main(){
    int arr[]= {7,2,7,7,3,9,7,0};
    int n = sizeof(arr)/sizeof(0);

    cout<<check(arr, n)<<endl;

    return 0;
}