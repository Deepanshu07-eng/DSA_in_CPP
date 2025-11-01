#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        vector<long long> a(n);
        for (auto &it : a) cin >> it;

        vector<long long> ans;
        if (k == 1) ans.push_back(x / 2); 
        else {
            long double step = (long double)x / (k - 1);
            for (int i = 0; i < k; i++) {
                long long pos = round(i * step);
                if (pos > x) pos = x; 
                ans.push_back(pos);
            }
        }
        for (auto v : ans) cout << v << " ";
        cout << "\n";
    }
    return 0;
}
