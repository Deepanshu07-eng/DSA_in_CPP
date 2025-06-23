#include<iostream>
using namespace std;

void pattern(int n){
    int row, i;
    row =1;
    while (row <=n){
        i = 1;
        while(i<=row){
            cout << '*' << " ";
            i=i+1;
        }
        cout <<'\n';
        row = row + 1;
    }
}

int main(){

    int n;
    cin>>n;

    pattern(n);
    

    return 0;
}