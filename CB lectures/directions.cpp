#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter directions: ";
    int x = 0, y = 0;
    while (cin.get(ch) && ch != '\n') {
        if (ch == 'N' || ch == 'n') y++;
        else if (ch == 'E' || ch == 'e') x++;
        else if (ch == 'W' || ch == 'w') x--;
        else if (ch == 'S' || ch == 's') y--;
    }

    if (x > 0) {
        while (x > 0) {
            cout << "E";
            x--;
        }
    }
    if (y > 0) {
         while (y > 0) {
            cout<< "N ";
            y--;
        }
    } else{

        while(y<0){
            cout << "S ";
            y++;
        }
        
    }
    if (x < 0) {
        while(x < 0){
            cout<<"W ";
            x++;
        }
    }

    return 0;
}