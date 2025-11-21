/*
The Game is as follows You have given a binary array, where 1 denotes push operation and 0 denotes a pop operation in a queue. The task is to check if the possible set of operations are valid or not.
Print Valid if the set of Operations are Valid Otherwise Print Invalid.


Input Format
The First Line contains an Integer T, as the number of Test cases.
The Next Line contains an Integer N, as the Size of the Array.
The Next Line contains N Binary numbers separated by space.
*/

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int count = 0;
        bool valid = true;

        for (int i = 0; i < N; i++) {
            if (arr[i] == 1) {
                count++;  // push
            } else {
                count--;  // pop
            }

            if (count < 0) {  // popped from empty queue
                valid = false;
                break;
            }
        }

        if (valid)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }

    return 0;
}
