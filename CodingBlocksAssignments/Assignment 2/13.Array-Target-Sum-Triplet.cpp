//Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.

#include<iostream>
#include<algorithm>
using namespace std;

void targetSumTriplet(int arr[], int n, int target) {
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++) {
        
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                cout << arr[i] << ", " << arr[left] << " and " << arr[right] << endl;
                left++;
                right--;

                
                while (left < right && arr[left] == arr[left - 1]) left++;
                while (left < right && arr[right] == arr[right + 1]) right--;
            } 
            else if (sum < target) {
                left++;
            } 
            else {
                right--;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    if (n > 1000 || n < 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    targetSumTriplet(arr, n, target);

    return 0;
}
