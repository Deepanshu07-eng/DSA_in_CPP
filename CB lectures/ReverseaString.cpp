#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void reverse(char *a){
    int len =strlen(a);

    int i=0;
    int j = len -1;

    while(i<j){
        swap(a[i], a[j]);

        i++;
        j--;
    }
}

int  main(){
    char ch[100];
    cin.getline(ch, 100, '\n');

    reverse(ch);
    cout<<ch;
    return 0;
}