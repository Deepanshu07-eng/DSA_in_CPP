#include<iostream>
using namespace std;

void waveprint(int a[][4], int n, int m){
    for(int j=0; j<m; j++){
        if(j % 2 == 0){
            for(int i=0; i<n; i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for( int i=n-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
            
        } cout<<endl;
    }
}

int main(){
    int a[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int n =3, m=4;

    waveprint(a,n,m);

    return 0;
}