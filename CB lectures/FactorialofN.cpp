#include<iostream>
using namespace std ;

long long factorial (int n){
    long long ans =1;
    for(int i=1; i<=n; i++){
        ans=ans*i;
    }
    return ans;
}
long long ncr(int n, int r){
    long long fact_n =  factorial(n);
    long long fact_r =  factorial(r);
    long long fact_nr =  factorial(n-r);

    int ans = fact_n / (fact_r * fact_nr);

    return ans;
}
int main(){
    cout<<ncr(13,1)<<endl;
    return 0;

}