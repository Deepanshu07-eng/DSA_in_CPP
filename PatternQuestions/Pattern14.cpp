/*
Enter n :5
output :-
12345
1234
123
12
1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n :";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1;  j++){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;
}