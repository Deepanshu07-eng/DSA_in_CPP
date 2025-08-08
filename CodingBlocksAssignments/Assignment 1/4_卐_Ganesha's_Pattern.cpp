/*Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  * */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
	if(n < 5 || n > 99) return 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(
                (i==(n/2)+1)||(j==(n/2)+1)||
                (j == 1 && (i<(n/2)+1))||
                (i==1 && (j>(n/2)+1))||
                (i==n && (j<(n/2)+1))||
                (j==n && (i>(n/2)+1))
            ) {
                cout<< "*";
            } else cout<<" ";
    }
    cout<<endl;
}
    return 0;
}
