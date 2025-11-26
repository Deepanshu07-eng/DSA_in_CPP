/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take N more inputs and store that in another array. Write a function which gives the intersection of two arrays in an ArrayList of integers and Print the ArrayList.


Input Format
First line contains N denoting the size of the two arrays. Second line contains N space separated integers denoting the elements of the first array. Third line contains N space separated integers denoting the elements of the second array.


Constraints
Length of Arrays should be between 1 to 100000.


Output Format
Display the repeating elements in a comma separated manner enclosed in square brackets. The numbers should be sorted in increasing order.


Sample Input
7
1 2 3 1 2 4 1
2 1 3 1 5 2 2
Sample Output
[1, 1, 2, 2, 3]

*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < N; i++) cin >> b[i];

    unordered_map<int, int> freqA, freqB;

    for (int x : a) freqA[x]++;
    for (int x : b) freqB[x]++;

    vector<int> result;

    for (auto &p : freqA) {
        int num = p.first;
        if (freqB.count(num)) {
            int times = min(freqA[num], freqB[num]);
            while (times--) result.push_back(num);
        }
    }

    sort(result.begin(), result.end());

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]";

    return 0;
}

