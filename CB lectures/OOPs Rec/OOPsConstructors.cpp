#include<iostream>
#include<cstring>
using namespace std;

//////////////////////BLUEPRINT//////////////////////

class car{
public:
    char name[100];
    int price;
    int model;
    int seats;

    // 1. DEFAULT CONSTRUCTOR : Function that gets called when we create an object
    car(){  // constructor dont return anything, just used to create objects.
        cout<<"Inside Default Constructor\n";

    }

    // 2. PARAMETERISED CONSTRUCTOR : 

    car(char*n, int p, int m, int s){
        cout<<"Inside Parameterised Constructor\n";
        strcpy(name, n);
        price = p;
        model = m;
        seats = s;

    }



    // Members Functions //
    void print(){
        cout<<"Name   :"<<name<<endl;
        cout<<"Price  :"<<price<<endl;
        cout<<"Model  :"<<model<<endl;
        cout<<"Seats  :"<<seats<<endl<<endl;

    }

};

///////////////// BLUEPRINT /////////////////

int main(){

    car A;                      // It wil call Default Constructor
    strcpy(A.name, "RR");
    A.price = 70000000;
    A.model = 2025;
    A.seats = 4;

    car B("Maruti", 10000000, 2022, 5 );  // It will call parameterised Constructor


    A.print();
    B.print();

}