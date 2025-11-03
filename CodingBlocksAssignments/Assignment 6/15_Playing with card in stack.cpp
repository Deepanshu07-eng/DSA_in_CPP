/*
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> stockSpan(vector<int>& prices) {
    int n = prices.size();
    vector<int> span(n);
    stack<int> st;  // stores indices

    for (int i = 0; i < n; i++) {
        // Pop smaller or equal elements
        while (!st.empty() && prices[st.top()] <= prices[i])
            st.pop();

        // If empty, span = i + 1
        if (st.empty())
            span[i] = i + 1;
        else
            span[i] = i - st.top();

        // Push current index
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


*/

#include <bits/stdc++.h>
using namespace std;

vector<int> generatePrimes(int limit) {
    vector<int> primes;
    vector<bool> isPrime(1000000, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < 1000000; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            if ((int)primes.size() == limit) break;
            for (long long j = 1LL * i * i; j < 1000000; j += i)
                isPrime[j] = false;
        }
    }
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<int> A0(N);
    for (int i = 0; i < N; i++) cin >> A0[i];

    vector<int> primes = generatePrimes(Q);
    vector<int> A = A0;

    vector<vector<int>> B(Q);

    for (int i = 0; i < Q; i++) {
        vector<int> nextA;
        int p = primes[i];

        for (int j = A.size() - 1; j >= 0; j--) {
            if (A[j] % p == 0)
                B[i].push_back(A[j]);
            else
                nextA.push_back(A[j]);
        }
        A = nextA;
    }

    for (int i = 0; i < Q; i++) {
        for (int j = B[i].size() - 1; j >= 0; j--) {
            cout << B[i][j] << "\n";
        }
    }

    for (int j = A.size() - 1; j >= 0; j--) {
        cout << A[j] << "\n";
    }

    return 0;
}
