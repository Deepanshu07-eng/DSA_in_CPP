#include <iostream>
#include<stack>
using namespace std;

void insertBottom (stack<int> &s, int top){
    if( s.empty()){s.push(top); return;}

    int x = s.top();
    s.pop();
    insertBottom(s, top);
    s.push(x);
}



void reverseStack(stack<int> &s){
    if( s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    reverseStack(s);
    insertBottom(s, top);
}
int main(){
    stack<int>s;

    for(int i=1; i<5; i++) s.push(i);

    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;

}
