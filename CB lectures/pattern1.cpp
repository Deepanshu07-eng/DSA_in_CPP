#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N";
    cin>>n; 
    for(int i=1; i<=n; ++i){

        // 1. print i times stars
        for(int stars=1; stars <=i; ++stars ){
            cout<<"*";
        }
        // 2. print ' '
        cout<<" ";
        // 3. print n-i+1 times star
        for(int stars=1; stars<=n-i+1; ++stars){
            cout<<"*";
        }
        // 4. print ' '
        cout<<" ";
        // 5. print n-i+1 times star
        for(int stars=1; stars<=n-i+1; ++stars){
            cout<<"*";
        }
        // 6. print ' '
        cout<<" ";
        // 7. print i times stars
        for(int stars=1; stars<=i; ++stars){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}