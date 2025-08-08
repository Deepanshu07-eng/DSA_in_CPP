#include<iostream>
using namespace std;

bool isprime(int n){
    bool primehai =true;
    for(int i=2; i<n; i++){
        if( n%i==0){
            primehai = false;
            break;
        }
    }
}
void printAllPrimes(int n){
    for(int i=2; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin >> n;
    printAllPrimes(n);
}