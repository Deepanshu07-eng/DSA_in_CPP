#include<iostream> 
using namespace std;
#define P cout<<

int main(){

    int rows, n, spaces, stars; 
    cin>>n;
    for(rows=1; rows<=n; ++rows){
        //print spaces n-rows
        for(spaces=1; spaces<=n-rows; ++spaces){
            cout<<"  ";
        }
        //print stars 2*rows-1 
        for(stars=1; stars<=2*rows-1; ++stars){
            P"* ";
        }
        cout<<endl;
    }
    //mirror part
    for(rows=n-1; rows>=1; --rows){
         //print spaces n-rows
        for(spaces=1; spaces<=n-rows; ++spaces){
            cout<<"  ";
        }
        //print stars 2*rows-1 
        for(stars=1; stars<=2*rows-1; ++stars){
            cout<<"* ";
        }
        cout<<endl;

    }
    return 0;
}