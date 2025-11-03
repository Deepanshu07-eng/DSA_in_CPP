/*
The stock span problem is a financial problem where we have a series of N daily price quotes for a stock and we need to calculate span of stock’s price for all N days. You are given an array of length N, where ith element of array denotes the price of a stock on ith. Find the span of stock's price on ith day, for every 1<=i<=N.
A span of a stock's price on a given day, i, is the maximum number of consecutive days before the (i+1)th day, for which stock's price on these days is less than or equal to that on the ith day.


Input Format
First line contains integer N denoting size of the array.
Next line contains N space separated integers denoting the elements of the array.
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> stockSpan(vector<int>& prices) {
    int n = prices.size();
    vector<int> span(n);
    stack<int> st;  

    for (int i = 0; i < n; i++) {
        
        while (!st.empty() && prices[st.top()] <= prices[i])
            st.pop();

        if (st.empty())
            span[i] = i + 1;
        else
            span[i] = i - st.top();

        st.push(i);
    }

    return span;
}

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<int> ans = stockSpan(prices);

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "END";

    return 0;
}

