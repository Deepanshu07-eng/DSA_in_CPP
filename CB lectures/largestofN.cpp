#include<iostream>
using namespace std;

int main(){

    int i, n, row;
    cin>>n;

    row =1;
    while (row <=n){


        i = 1;
        while(i<=row){
            cout << '*' << "";
            i=i+1;
        }

        cout <<'\n';
        row = row + 1;
    } 

    return 0;
}