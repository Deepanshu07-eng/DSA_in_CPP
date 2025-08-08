#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

void bubbleSort(int *a, int n, int i, int j){
    if(i == n-1 ) return;

    if(j<n-i-1){
        if(a[j]> a[j+1]){ 
            swap(a[j], a[j+1]);
            bubbleSort(a,n,i,j+1);
        }
    }
    else{
    bubbleSort(a,n,i+1,0);
    }
}
int main(){
    int a[]= {4,3,2,1,5};
    int n = sizeof(a)/ sizeof(int);

    bubbleSort(a, n ,0, 0);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}