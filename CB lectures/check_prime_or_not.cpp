#include<iostream>
using namespace std;
#define START int main(){
#define END return 0;}

START
    int n,i;
    cin>>n;
    
    i=2;
    while(i<=n-1){
        if (n%i==0){
        cout<<"Not PRIME"<<endl;
        return 0;
        }
        i=i+1;
    }
    cout<<"is Prime"<<endl;
END