#include<iostream>
using namespace std;

int strlngth(char *a){
    int len =0;
    int i =0;
    int ch=a[0];
    while(ch != '\0'){
        len++;
        ch =a[++i];
    }

    return len;
}
bool ispalindrome (char *a){
    int len =strlngth(a);

    int i=0;
    int j = len -1;

    while(i<j){
        if(a[i] != a[j]) return false;

        i++;
        j--;
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch, 100, '\n');
    int len =strlngth(ch);
    cout<<"Length :"<<strlngth(ch)<<endl;
     //char a[] ="madama";
    if(ispalindrome(ch)) cout <<"palindrome\n";
    else cout << "Not a Palindrome\n";

}