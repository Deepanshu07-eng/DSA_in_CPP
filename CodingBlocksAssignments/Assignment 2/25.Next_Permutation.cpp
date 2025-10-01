#include <iostream>
#include <algorithm>
using namespace std;

void optimal(int arr[], int n) {
    int pivot = -1;
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }
    if (pivot == -1) {
        reverse(arr, arr+n);
        return;
    }
    for (int i = n-1; i > pivot; i--) {
        if (arr[i] > arr[pivot]) {
            swap(arr[pivot], arr[i]);
            break;
        }
    }
    reverse(arr+pivot+1, arr+n);
}
void print(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n; cin>>n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    optimal(arr, n);
    print(arr, n);
    return 0;
}