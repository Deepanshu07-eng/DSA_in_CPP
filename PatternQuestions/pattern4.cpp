/*
if n=10 ;

2 3 5 7 
*/

#include<iostream>
using namespace std;

int main(){

    int n,i,number;
    cin>>n;

    for (number=2; number<=n; number++){
        
        for(i=2; i<number; i++){
            if(number % i == 0){
                break;
            }
        }
        if ( i==number){
            cout << number <<" ";
        }

    }

    cout << endl;

    return 0;
}