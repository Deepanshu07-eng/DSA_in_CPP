#include<iostream>
using namespace std;
int main() {
   int n; 
   cout<<"Enter n: ";
   cin>>n;

   for(int i=1; i<=n; i++){
       for(int j=1; j<=n-i; j++){
           cout<<" ";
       }
       for(int j=1; j<=i; j++){
        cout<<"*";
    
        }
        cout<<endl;
   }
   for (int i=2; i<=n; i++){
       for(int j=1; j<=i-1; j++){
           cout<<" ";
       }
       for(int j=1; j<=n-i+1; j++){
        cout<<"*";
    
        }
        cout<<endl;
   }
    
    return 0;
}