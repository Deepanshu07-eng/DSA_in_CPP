#include<iostream>
#include<cstring>
using namespace std;

void rotateString(char *a,  int k){
    // shift all character by k position
    int lena =  strlen(a);
    k %= lena;
    if ( k == 0) return;
    
    int i =lena -1;
    while ( i>=0) {
        a[i+k] = a[i];

        i--;
    }
    //bring k characters from last to front

    i=lena;
    int j=0;
    while (j<k){
        a[j++]=a[i++];
    }
    //add NULL character
    a[lena]= '\0';
}

int main(){
    char a[100];
    cin.getline(a, 100, '\n');

    int k;
    cin>>k;

    rotateString(a,k);
    cout<<k<<endl;

    return 0;
}