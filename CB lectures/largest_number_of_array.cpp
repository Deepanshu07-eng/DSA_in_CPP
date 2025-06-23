#include<iostream>
#include<climits>
using namespace std;

int Lararray(int a[],int n){
    int lar =INT_MIN;

    for (int i=0; i<n; i++){
        if ( a[i]>lar){
            lar = a[i];

        }
        
    }
    return lar;

}
int main(){
    int a[100],n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int lar = Lararray(a,n);
    
    cout<<" largest value: "<<lar<<endl; 

    return 0;
}