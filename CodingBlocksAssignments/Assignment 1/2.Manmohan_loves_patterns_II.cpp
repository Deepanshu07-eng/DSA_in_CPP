// Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

//Input Format
//Single integer N denoting number of lines of the pattern.

//Constraints
//N<=1000

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if (n>1000) return 0;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==1){
                cout<<1;
                break;
            }
            if(j==1 || j==i){
                cout<<i-1;
            }else{
                cout<<0;
            }
        }
        cout<<endl;
    }



    return 0;
}