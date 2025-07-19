#include<iostream>
using namespace std;

int main(){
    int a[]={0,1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int x=5;

    for(int i =0; i<n; i++){
        int num1= a[i];
        int num2 = x-num1;

        for (int j=i+i; j<n; j++ ){
            if (a[j]==num2){
                cout<<num1<<", "<<num2<<endl;
                break;
            }
        }
    }
}