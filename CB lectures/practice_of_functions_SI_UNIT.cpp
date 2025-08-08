//SI UNIT 

#include<iostream>
using namespace std;

float siunit(int p, int r, int t){

    float si;
    si=(p*r*t)/100.0;
    return si;
    
}

int main(){
    int p,r,t;
    cout<<"Enter p,r,t";
    cin>>p>>r>>t;

    int si=siunit(p,r,t);
    cout<<"simple interest : "<<si<<endl;

    return 0;

}