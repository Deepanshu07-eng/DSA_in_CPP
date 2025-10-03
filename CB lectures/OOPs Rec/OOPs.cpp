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

};

int main(){
    car A; // A is an object of class CAR
    // A ke variables ko use krne ke liye we use DOT Operator
    strcpy(A.name, "RR");
    A.price = 70000000;
    A.model = 2025;
    A.seats = 4;

    cout<<"Name   :"<<A.name<<endl;
    cout<<"Price  :"<<A.price<<endl;
    cout<<"Model  :"<<A.model<<endl;
    cout<<"Seats  :"<<A.seats<<endl;

    car B; 
    strcpy(B.name, "Dodge Challenger");
    B.price = 24000000;
    B.model = 2023;
    B.seats = 2;

    cout<<"Name   :"<<B.name<<endl;
    cout<<"Price  :"<<B.price<<endl;
    cout<<"Model  :"<<B.model<<endl;
    cout<<"Seats  :"<<B.seats<<endl;

    return 0;
}