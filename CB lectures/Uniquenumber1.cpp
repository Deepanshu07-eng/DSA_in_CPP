#include <iostream>
using namespace std;

int main(){
    int n,i, no;
    cin>>n;

    int ans=0;
    for(i=1; i<=n; i++){
        cin >> no;
        ans^=no;
    }

    cout<<"Unique number : "<<ans<<endl;

    return  0;
}



