/*
Take as input N, a number. N is the size of a snakes and ladder board (without any snakes and ladders). Take as input M, a number. M is the number of faces of the dice.

a. Write a recursive function which returns the count of different ways the board can be traveled using the dice. Print the value returned.

b. Write a recursive function which prints dice-values for all valid paths across the board (void is the return type for function).
*/

#include<iostream>
#include <string>
using namespace std;

void board(int n, int m, int sum, string ans, int& count) {
	if (sum == n) {
		count++;
		cout<<ans<<" ";
		return;
	}
	if (sum > n) return;

	for (int num = 1; num <= m; num++) {
		if (sum < n) {
			char c = '0' + num;
			ans.push_back(c);
			board(n, m, sum+num, ans, count);
			ans.pop_back();
		}
	}
}
int main() {
	int n, m;
	cin>>n>>m;

	string ans;
	int count = 0;

	board(n, m, 0, ans, count);

	cout<<endl<<count;

	return 0;
}