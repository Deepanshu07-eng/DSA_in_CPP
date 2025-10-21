#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec= {'a', 'e', 'i', 'o', 'u'};

    for(char val: vec){   // for each loop
        cout<<val<<endl;
    }

    return 0;
}