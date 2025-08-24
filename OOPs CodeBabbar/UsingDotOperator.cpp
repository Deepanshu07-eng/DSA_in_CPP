#include<iostream>
using namespace std;

class Hero{
    //Properties
    public: // accessable everywhere
    int Health;
    char level;
    private: // Only accessable in Class
    int Height;

    void print(){
        cout<<Height<<endl;
    }
};

int main(){
    //Creation of Object
    Hero Rahul;

    cout<<"Health is: " << Rahul.Health<<endl;
    cout<<"level is: " << Rahul.level<<endl;

    
}