#include<iostream>
using namespace std;

void printTable(int init, int fval, int step){
    int far,cel;
    far = init;

    while(far<=fval){
        cel =(5/9.0)*(far -32);
        cout << far<<" "<< cel <<"\n";

        far = far + step;
}
}

int main(){

    int init, fval, step;
    cin>>init>>fval>>step;

    printTable(init,fval,step);
   cout<<"\n print another table: \n";
   printTable(0,200,50);


    return 0;
}
