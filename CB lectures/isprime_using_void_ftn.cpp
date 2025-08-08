#include<iostream>
using namespace std;

bool isprime(int n){
    bool primehai =true;
    for(int i=2; i<n;i++){
        if(n % i==0){
            primehai=false;
            break;
        }

    }
    return primehai;
}
int main(){
    int n;
    cin >>n;

    bool ans = isprime(n);
    if(ans==false)cout<<"Not prime\n";
    else cout<<"prime\n";

    return 0;

}