#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int better (int arr[], int n) {
    vector<int> lmax(n,0);
    vector<int> rmax(n,0);
    int ans = 0;

    lmax[0] = arr[0], rmax[n-1] = arr[n-1];

    for (int i = 1; i < n; i++) {
        lmax[i] = max(lmax[i-1], arr[i]);
    }

    for (int i = n-2; i >= 0; i--) {
        rmax[i] = max(rmax[i+1], arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        ans += min(lmax[i], rmax[i]) - arr[i];
    }
    
    return ans;
}
int optimal (int arr[], int n) {
    int lmax = arr[0], rmax = arr[n-1];
    int ans = 0;

    int i = 0, j = n-1;
    while (i <= j) {
        lmax = max(lmax, arr[i]);
        rmax = max(rmax, arr[j]);
        if (lmax < rmax) {
            ans += lmax - arr[i++];
        } else {
            ans += rmax - arr[j--];
        }
    }
    return ans;
}
int main() {
    int n;
    cin>>n;

    int * arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<optimal(arr, n);


    delete[] arr;
    return 0;
}