#include<iostream>
#include<cstring>
using namespace std;

///////////////////____________BLUEPRINT____________///////////////////
class car{
public:
    char name[100];
    int price;
    int model;
};
///////////////////____________BLUEPRINT____________///////////////////

int main(){
    car A;
    strcpy(A.name, "Suzuki");
    A.price= 10;
    A.model = 2020;

    cout<<A.name<<endl;
    cout<<A.price<<endl;
    cout<<A.model<<endl;


    return 0;
}