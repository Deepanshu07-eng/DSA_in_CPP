/*
if i give n=5 ;
this will be the output:-

1****
12***
123**
1234*
12345
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for( int i=1; i<=n; i++){
        for (int j = 1; j <=i; j++){
           cout<<j;
        }

        for(int k=1; k<=n-i;k++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}