#include <iostream>
using namespace std;

int main() {
    int n = 7;
    cout<<&n<<endl;

    int* ptr = &n;
    cout<<ptr<<endl;


    /*
    & -> bitwise and
    & -> reference operator
    & -> address of
    */

    cout<<*ptr<<endl; // * value at -> jis address pe ptr point kr rha h , uspe kya value present h

    /*
    * -> multiplication
    * -> pointer bnane ke liye
    * -> value at address
    */


    int* p = 0;
    cout<<*p<<endl;



    int x = 10;
    int* y = &x; // maanle &x = 100 h or &y = 200 h

    cout<<x<<endl; // 10
    cout<<&x<<endl; // 100
    cout<<y<<endl; // 100
    cout<<*y<<endl; // 10
    cout<<&y<<endl; // 200
    cout<<*(&x)<<endl; // 10
    cout<<&(*y)<<endl; // 100
    cout<<x+1<<endl; // 11
    cout<<&x +1<<endl; // 100 + 1*4 = 104
    cout<<y+1<<endl; // 100 + 1*4 = 104
    cout<<*y + 1<<endl; // 11
    cout<<*(&y)<<endl; // 100


    return 0;
}