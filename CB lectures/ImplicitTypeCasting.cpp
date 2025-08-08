#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >>ch;
    if(ch>='A'&& ch<='Z'){
        cout<<"It is a UpperCase\n";
    }
    else if(ch>='a' and ch<='z'){
        cout<<"It is a LowerCase\n";
    }
    else{
        cout<<"Entered character isn't an alphabet\n";
    }
    
    return 0;
}