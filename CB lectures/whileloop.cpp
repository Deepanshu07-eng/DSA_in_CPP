#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout <<"Enter n:";
    cin >> n;
    i=1; //initialisation
    while (i<=n){ //condition check
        cout << i << '\n';
        i=i+1; //Updation
    }

    return 0;
}