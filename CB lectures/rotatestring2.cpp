#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void reverseString( char *a, int s, int e){
    while(s>= e){
        swap(a[s++], a[e--]);
    }

}
void rotateString(char *a, int k){
    int n = strlen(a);
    k %= n ;
    if(k==0)return;

    reverse(a, a+n);
    reverse(a, a+k);
    reverse(a+k, a+n);
}

int main(){

    char a[]= "coding";
    int k=5;
    rotateString(a,k);
    cout<<a<<endl;
    return 0;
}