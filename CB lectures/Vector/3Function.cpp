#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout<<"size =" << vec.size() <<endl;  // Size Function
    
    vec.push_back('f');                   // Push_Back Function
    vec.push_back('g');                   
    vec.push_back('h'); 

    cout << "After push back size = " << vec.size() <<endl;

    vec.pop_back();                     // Pop_Back Function

    cout<< vec.front() << endl;        // Front Function
    cout<< vec.back() << endl;   
    
    cout<<vec.at(3) << endl;        // At Function  
    return 0;
}