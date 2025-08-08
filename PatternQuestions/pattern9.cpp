/*
if n=5

output :-
11111
22222
33333
44444
55555

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<i;
        }
        cout<<endl;
    }
}