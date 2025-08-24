#include<iostream>
using namespace std;

class Hero{
    //Properties
    public: // accessable everywhere
    int Health;
    char level;
    //private: // Only accessable in Class
    int Height;
};

int main(){
    //Creation of Object
    Hero Rahul;

    Rahul.Health = 98;
    Rahul.level = 'A' ;
    Rahul.Height = 5'11;


    cout<<"Health is: " << Rahul.Health<<endl;
    cout<<"level is: " << Rahul.level<<endl;

    return 0;
};