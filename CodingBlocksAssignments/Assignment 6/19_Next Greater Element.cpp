/*
Given an array of integers, for each element in the array, find the next greater element (NGE) in the array. The next greater element for an element x is the first element y to the right of x in the array such that y > x. If no such element exists, the NGE for that element is -1.


Input Format
The first line contains an integer n, the size of the array.
The second line contains n space-separated integers A[0], A[1], ..., A[n-1].
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<long long> nextGreaterElements(vector<long long>& arr) {
    int n = arr.size();
    vector<long long> nge(n, -1);
    stack<long long> st;
    
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (!st.empty()) nge[i] = st.top();

        st.push(arr[i]);
    }

    return nge;
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<long long> result = nextGreaterElements(arr);

    for (int i = 0; i < n; i++) cout << result[i] << " ";
    cout << endl;

    return 0;
}
