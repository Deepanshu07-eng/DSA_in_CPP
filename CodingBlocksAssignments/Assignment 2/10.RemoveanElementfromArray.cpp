// You are given an integer N, an array of integers arr of size N and an integer target. You have to remove all occurrences of target in arr. The relative order of the elements should not be changed. Do not allocate extra space for another array. You must do solve this problem by modifying the input array in place.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int index=0;

    for(int i=0; i<n; i++){
        if( arr[i] != target){
            arr[index]=arr[i];
            index++;
        }
    }

    for (int i=0;  i<index; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}