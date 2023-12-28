#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;
#define ll long long

void solve() {
    int n;
    cin >> n;
    ll ans = 0;
    vector<int> a(n);
    unordered_map<ll, int> mp;
    for (auto &k: a)cin >> k;
    for (int i = 0; i < n; ++i) {
        ll base = 1;
        for (int k = 0; k <= 30; ++k) {
            if (a[i] % base == 0) {
                if (a[i] / base == a[i] - k)ans += mp[a[i] / base];
            }
            if (k && base * a[i] == a[i] + k)ans += mp[a[i] * base];
            base *= 2;
        }
        mp[a[i]]++;
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
