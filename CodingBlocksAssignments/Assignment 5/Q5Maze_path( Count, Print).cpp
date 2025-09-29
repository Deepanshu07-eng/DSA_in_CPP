/*
Take as input N1 and N2, both numbers. N1 and N2 is the number of rows and columns on a rectangular board. Our player starts in top-left corner of the board and must reach bottom-right corner. In one move the player can move 1 step horizontally (right) or 1 step vertically (down).

a. Write a recursive function which returns the count of different ways the player can travel across the board. Print the value returned.

b. Write a recursive function which returns an ArrayList of moves for all valid paths across the board. Print the value returned.

e.g. for a board of size 3,3; a few valid paths will be “HHVV”, “VVHH”, “VHHV” etc. c. Write a recursive function which prints moves for all valid paths across the board (void is the return type for function).
*/

#include<iostream>
#include <string>
using namespace std;

int mazeCount(int n, int m, int i = 0, int j = 0) {

    if (i == n - 1 && j == m - 1) return 1;

    int count = 0;

    if (i < n - 1) {
        count += mazeCount(n, m, i + 1, j);
    }

    if (j < m - 1) {
        count += mazeCount(n, m, i, j + 1);
    }

    return count;
}
void maze(int n, int m, string& ans, int i = 0, int j = 0) {
	if (i == n-1 && j == m-1) {
		cout<<ans<<" ";
		return;
	}

	if (i < n-1) {
		ans.push_back('V');
		maze(n, m, ans, i+1, j);
		ans.pop_back();
	}

	if (j < m-1) {
		ans.push_back('H');
		maze(n, m, ans, i, j+1);
		ans.pop_back();
	}
}
int main() {
	int n, m;
	cin>>n>>m;
	string ans;
	maze(n, m, ans);
	int count = mazeCount(n, m);
	cout<<endl<<count;
	return 0;
}