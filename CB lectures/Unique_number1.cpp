#include <iostream>
using namespace std;

int uniquenum(int n){

    int ans=0;
    int i, no;
    for(i=1; i<=n; i++){
        cin >> no;
        ans^=no;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans = uniquenum(n);
    
    cout<<"Unique number : "<<ans<<endl;

    return  0;
}



