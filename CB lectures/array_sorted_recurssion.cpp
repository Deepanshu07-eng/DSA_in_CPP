#include<iostream>
using namespace std;

bool isSorted(int *a , int n){
    if(n<=1) return true;
    bool kyachotasortedhai = isSorted(a+1, n-1);
    if(a[0] <= a[1] and kyachotasortedhai == true) return true;
    else return false;
}

bool isSorted2 (int *a, int n){
    if(n<-1) return true;

    if(a[n-1] <= a[n-2] and isSorted2 (a, n-1));

}
int main(){

    int a[]= {1,-2,3,10,5};
    int n = sizeof(a)/sizeof(int);
    if(isSorted (a,n)) cout<<"sorted\n";
    else cout<<"Not sorted\n";

    
    return 0;
}