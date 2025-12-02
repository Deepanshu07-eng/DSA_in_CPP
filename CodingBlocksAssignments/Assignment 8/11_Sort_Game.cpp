/*
Sanju needs your help! He gets a list of employees with their salary. The maximum salary is 100.

Sanju is supposed to arrange the list in such a manner that the list is sorted in decreasing order of salary. And if two employees have the same salary, they should be arranged in lexicographical manner such that the list contains only names of those employees having salary greater than or equal to a given number x.

Help Sanju prepare the same!


Input Format
On the first line of the standard input, there is an integer x. The next line contans integer N, denoting the number of employees. N lines follow, which contain a string and an integer, denoting the name of the employee and his salary.


Constraints
1 <= N <= 10^5 1 <= | Length of the name | <= 100 1 <= x, salary <= 100


Output Format
You must print the required list.


Sample Input
79
4
Eve 78
Bob 99
Suzy 86
Alice 86

Sample Output
Bob 99
Alice 86
Suzy 86
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;

    int N;
    cin >> N;

    vector<pair<string, int>> v;

    for(int i = 0; i < N; i++) {
        string name;
        int salary;
        cin >> name >> salary;
        if(salary >= x) {
            v.push_back({name, salary});
        }
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        if(a.second != b.second)
            return a.second > b.second;
        return a.first < b.first;
    });

    for(auto &p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
