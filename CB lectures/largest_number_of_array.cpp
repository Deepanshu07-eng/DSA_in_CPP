#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[] = {1,134,311,1191,51131, 13132, 42132, 521232, 134123,41323,532123};
    int n = sizeof(a)/sizeof(int);

    int lar =INT_MIN;

    for (int i=0; i<n; i++){
        if ( a[i]>lar){
            lar = a[i];

        }

    }
    cout<<" largest value: "<<lar<<endl; 

    return 0;
}