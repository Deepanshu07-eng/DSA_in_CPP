/*
You are provided an array of numbers. You need to arrange them in a way that yields the largest value.
*/

#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string &a, string &b) {
    return a + b > b + a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), compare);

        if (arr[0] == "0") {
            cout << "0\n";
            continue;
        }

        string result = "";
        for (string &num : arr) {
            result += num;
        }

        cout << result << endl;
    }
    return 0;
}