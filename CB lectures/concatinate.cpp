#include<iostream>
#include<cstring>
using namespace std;

void appent(char *a, char*b){
    int i = strlen(a);
    int j =0;

    int lenb = strlen(b);

    while(i<=lenb){
        a[i++] = b[ j++];
    }
}

int main(){

    char a[100] = "Hello";
    char b[100] = "World";
    
    //append(a,b);
    strcat(a, b);

    cout<<a<<endl;
    
    return 0;
}