#include<iostream>
#include<string>
using namespace std ;

string keys[10]{
    "zero","one","two","three","four","five","six","seven","eight","nine", 
};
void print(int num ){
    if(num <= 0) return;
    int digit = num %10;
    
    print(num /10);
    cout<<keys[digit]<<" ";

}

int main(){
    int num = 2048;
    print(num);
    return 0;
}