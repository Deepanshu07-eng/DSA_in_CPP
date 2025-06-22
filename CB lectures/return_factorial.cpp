#include<iostream>
using namespace std;

int printfact(int num){
    int ans=1;
    for (int i=1; i<=num; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int num;
    cout<<" Enter number :";
    cin>>num;

    int ans = printfact(num);

    cout<<ans<<endl;
    
    return 0;
}