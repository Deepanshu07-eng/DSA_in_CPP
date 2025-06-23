#include <iostream>
using namespace std;

int main(){
    int n;
    float ans;
    cin >> n;

    ans=0;
    while(ans*ans<=n){
        ans=ans+1;
    }
    ans=ans-1;
    //cout<<ans<<endl; // endl == '\n'

    float inc=0.1;
    int current_precision = 1;
    while ( current_precision <=3){
         while(ans*ans<=n){
        ans=ans+inc;
    }
    ans=ans-inc;
    inc = inc /10;
    current_precision = current_precision+1;
    }

    cout <<ans << endl;

    return 0;
}