#include<iostream>
using namespace std;

class Hero{
    //Properties
    private: // accessable everywhere
    int Health;
    int Height;

    public:
    char level;
    //private: // Only accessable in Class
    
    //  Getter
    int getHealth(){
        return Health;
    }

    char getlevel(){
        return level;
    }
    int getHeight(){
        return Height;
    }
    // Setter

    void setHealth(int h){
        Health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
    void setHeight(int X){
        Height =X;
    }

};

int main(){
    //Creation of Object
    Hero Rahul;
    cout<<"Rahul Health is" << Rahul.getHealth()<<endl;
    Rahul.setHealth(87);
    Rahul.setHeight(5'11);
    cout<<"Rahul Height is: "<<Rahul.getHeight()<<endl;

    Rahul.level = 'A' ;
    


    cout<<"Health is: " << Rahul.getHealth()<<endl;
    cout<<"level is: " << Rahul.level<<endl;
    cout<<"Height i: " << Rahul.getHeight()<<endl;

    return 0;
};