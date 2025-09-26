/*
Take as input N1 and N2, both numbers. N1 and N2 is the number of rows and columns on a rectangular board. Our player starts in top-left corner of the board and must reach bottom-right corner. In one move the player can move 1 step horizontally (right) or 1 step vertically (down) or 1 step diagonally (south-east).

Write a recursive function which:
a. Returns the count of different ways the player can travel across the board. Print the value returned.
b. Prints moves for all valid paths across the board.
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

	if (i < n-1 && j < m-1) {
		count += mazeCount(n, m, i+1, j+1);
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

	if (i < n-1 && j < m-1) {
		ans.push_back('D');
		maze(n, m, ans, i+1, j+1);
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