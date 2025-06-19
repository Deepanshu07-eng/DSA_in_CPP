#include<iostream>
using namespace std;

int main (){
    int n, rows, spaces, stars, i;
    cin>>n;
    for(rows=1; rows<=n; ++rows){
        if(rows == 1){
            for(i=1; i<=2*n-1; ++i){
                cout<<"* ";

            }
        
        }else{
            spaces = 2*rows-3;

            stars = ((2*n-1)-spaces)/2;

            for(i=1; i<=stars; ++i){
                cout<<"* ";
            }
            for(i=1; i<=spaces; ++i){
                cout<<"  ";
            }
            
            for(i=1; i<=stars; ++i){
                cout<<"* ";
            }
        }
        cout<< endl;
    }
    //mirror pattern

    for(rows=n-1; rows>=1; --rows){
        if(rows == 1){
            for(i=1; i<=2*n-1; ++i){
                cout<<"* ";

            }
        }
        else{
            spaces = 2*rows-3;

            stars = ((2*n-1)-spaces)/2;

            for(i=1; i<=stars; ++i){
                cout<<"* ";
            }
            for(i=1; i<=spaces; ++i){
                cout<<"  ";
            }
            
            for(i=1; i<=stars; ++i){
                cout<<"* ";
            }
        }
        cout<< endl;
    }

    return 0;
}