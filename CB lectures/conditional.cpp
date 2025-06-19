#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter n: ";
    cin>> a;

    if(a>18 && a<30){
        cout<<"hello";
    }else if (a>30 && a<50){
        cout<<"Hello world";
    }else{
        cout<<"I am Deepanshu";
    }
    return 0;
}