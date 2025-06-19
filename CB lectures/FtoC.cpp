#include <iostream>
using namespace std;

int main(){
    int init, fval, step, far, cel;
    cin>>init>>fval>>step;

    //print the table
    far = init;

    while(far<=fval){
        cel =(5/9.0)*(far -32);
        cout << far<<" "<< cel <<"\n";

        far = far + step;


    }

    return 0;
}