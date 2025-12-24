/*
Given a positive number N your task is to bring this number to 1 by performing only a set of operations. The operations can be either dividing the number by 2 only if the number is even or you can add or subtract 1 only if the number is odd.
More Precisely:
1) N=N/2 (if N is even)
2)N=N+1/ N=N-1 (if N is odd),
Your task is to minimize these number of operations.


Input Format
A single positive integer N


Constraints
n<=100000


Output Format
Print on a single line the minimum number of steps needed to reach 1 by performing the given operations.


Sample Input
8
Sample Output
3
*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long steps = 0;

    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            if (n == 3 || n % 4 == 1) n--;
            else n++;
        }
        steps++;
    }

    cout << steps;
    return 0;
}
