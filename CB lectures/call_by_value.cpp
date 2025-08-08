#include<iostream>
using namespace std;

int update(int &x){
    x++;
    cout<<"x : "<<x<<endl;
}

int main(){
    int a=1;
    cout<<"Before update a:" << a <<endl;
    //a++;
    update(a); // update krenge a ko via function
    cout<<"After update a:" << a <<endl;
    return 0;

}