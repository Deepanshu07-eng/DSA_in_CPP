#include<iostream>
using namespace std;

int main(){
    int a[]={2,4,6,7,2,1,6,8,4};
    int n = sizeof(a)/sizeof(int);

    for(int i=0; i<n-1; i++){
        for( int j=0; j<=n-2; j++){
        if(a[j]>a[j+1]){
            swap(a[j], a[j+1]);
        }
     }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<"";
        
    }
    cout<<endl;

    return 0;
}