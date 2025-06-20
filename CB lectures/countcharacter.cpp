#include <iostream>
using namespace std;

//cin white space character ko ignore krta hai 
int main(){
    /*char ch; 
    int cnt=0;
    cin>>ch;
    while(ch != '$'){
        cnt++;
        cin>>ch;

    }
    cout<<cnt<<endl; */

    // ch=cin.get(); white space character ko ignore nahi karta
    char ch; 
    int cnt=0;

    ch=cin.get();
    while(ch != '$'){
        cnt++;
        
        ch=cin.get();

    }
    cout<<cnt<<endl;
    return 0;
}





