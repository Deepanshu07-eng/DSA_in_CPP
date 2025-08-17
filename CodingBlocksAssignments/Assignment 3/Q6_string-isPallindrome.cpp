#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin>>s;

    int n=s.length();
    int j =n-1;
    for(int i=0; i<n/2; i++){
        if(s[i] != s[j]) {
            cout<< "false";
            break;
        }
        j--;
    }
    cout<<"true";

	return 0;
}