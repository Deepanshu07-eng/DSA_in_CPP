#include<iostream>
using namespace std;

bool check7(int*arr, int n){
    //Base case
    if(n==0){
        return false;
    }
    
    //Recursion case
    
    if(arr[0]==7) return true;
  
    return check7(arr+1, n-1);

}

int first7(int*arr, int n){
    //Base Case
    if(n==0) return -1 ;

    //Recursion Case
    if(arr[0] == 7){
        return 0;
    }

    int chotaindex= first7(arr+1, n-1);
    if(chotaindex != -1 ) return chotaindex + 1;

    return -1;
}

int last7(int*arr, int n, int i){
    //base case
    if ( i==n ) return -1;
    //recursion case
    if(arr[i]==7){
        int aageindex = last7(arr,n,i+1);
        if(aageindex == -1) return i;
        return aageindex;
    }
    else{
        /*int index = last7(arr,n,i+1);
        if(index != -1) return index;

        return index;*/
        return last7(arr,n,i+1);
    }
}

void printall7(int*arr, int n, int i){
    //base case
    if( i == n ) return;
    //recursion case

    if(arr[i] == 7){
        cout<<i<<" ";
    }

    printall7(arr,n,i+1);
}

int main(){
    int arr[]= {1,2,7,7,3,9,7,0};
    int n = sizeof(arr)/sizeof(int);

    cout<<check7(arr, n)<<endl;

    cout<<first7(arr,n)<<endl;

    cout<<last7(arr,n,0)<<endl;

    printall7(arr, n, 0);

    return 0;
}