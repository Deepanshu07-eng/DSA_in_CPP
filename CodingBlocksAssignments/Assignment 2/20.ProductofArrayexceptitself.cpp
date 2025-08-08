//Given an array arr of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of arr except arr[i].

#include <iostream>
#include <vector>
using namespace std;

vector<long long> optimal(vector<int> nums) {
    int n = nums.size();
    vector<long long> ans(n, 1); 
    
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    long long suffix = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }

    return ans;
}

void print(vector<long long> nums, int n) {
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    if (n < 1) return 0;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] < -10000000 || nums[i] > 10000000) return 0;
    }

    print(optimal(nums), n);

    return 0;
}