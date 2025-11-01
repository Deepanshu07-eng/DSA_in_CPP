/*
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.



Input Format
First line contains a single integer N, denoting the number of bars in th histogram.
Next line contains N integers, ith of which, denotes the height of ith bar in the histogram.


Constraints
1<=N<=10^6
Height of each bar in histogram <= 10^10


Output Format
Output a single integer denoting the area of the required rectangle.
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

long long largestRectangleArea(vector<long long>& heights) {
    stack<int> st;  // to store indices
    long long maxArea = 0;
    int n = heights.size();

    for (int i = 0; i <= n; i++) {
        // Add a sentinel 0 height at the end to empty the stack
        long long currHeight = (i == n ? 0 : heights[i]);

        while (!st.empty() && currHeight < heights[st.top()]) {
            long long height = heights[st.top()];
            st.pop();
            int right = i;
            int left = st.empty() ? -1 : st.top();
            long long width = right - left - 1;
            maxArea = max(maxArea, height * width);
        }

        st.push(i);
    }

    return maxArea;
}

int main() {
    int n;
    cin >> n;

    vector<long long> heights(n);
    for (int i = 0; i < n; i++) cin >> heights[i];

    cout << largestRectangleArea(heights) << endl;
    return 0;
}

