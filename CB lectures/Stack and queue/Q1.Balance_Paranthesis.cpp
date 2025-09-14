#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(char *a){
    stack<char>s;

    for(int i=0; a[i]; i++)
    {
        char ch =a[i];
        switch  (ch){
            case '{' :
            case '(' :
            case '[' : s.push(a[i]);
                break;
            case '}':
                if(!s.empty() and s.top() != '{' ) return false;
                s.pop();
                break;
            case ')':
                if(!s.empty() and s.top() != '(' ) return false;
                s.pop();
                break;
            case ']':
                if(!s.empty() and s.top() != '[' ) return false;
                s.pop();
                break;
        }
    }
    return s.empty();
}

int main() {
    char a[] = "{a+b*(c+d)*(d+f)}";

    if(isBalanced(a)) cout<<"Balanced"<<endl;
    else cout<<"Not balanced"<<endl;


    return 0;
}