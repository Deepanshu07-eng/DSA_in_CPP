#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const long long MOD = 1000000007;
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<long long, int> last;
    long long ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        if (last.count(a[r]) && last[a[r]] >= l) l = last[a[r]] + 1;
        last[a[r]] = r;
        long long len = r - l + 1;
        ans = (ans + (len * (len + 1) / 2) % MOD) % MOD;
    }

    cout << ans;
}
