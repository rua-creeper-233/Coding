#include<bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;
int t;
ll maxx(ll a, ll b) {
    return a > b ? a : b;
}

ll minn(ll a, ll b) {
    return a < b ? a : b;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &L: a)cin >> L;
    a.insert(a.begin(), 0);
    vector<long long> s(n + 1);
    for (int i = 1; i <= n; ++i)s[i] = s[i - 1] + a[i];
    long long ans = 0;
    for (int k = 1; k <= n; ++k) {
        if (n % k == 0) {
            long long maxx = -1, minn = 1e15 + 1;
            for (int i = k; i <= n; i += k) {
                maxx = max(maxx, s[i] - s[i - k]);
                minn = min(minn, s[i] - s[i - k]);
            }
            ans = max(maxx - minn, ans);
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
//
// Created by Invalid_index on 2023/11/17.
//
