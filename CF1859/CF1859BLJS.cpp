#include<bits/stdc++.h>

using namespace std;
int t;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    int mmin = 1e9;
    for (int i = 0; i < n; ++i) {
        int mmin1 = 1e9, mmin2 = 1e9;
        int m;
        cin >> m;
        int t;
        for (int j = 0; j < m; ++j) {
            cin >> t;
            if (t < mmin1) {
                mmin2 = mmin1;
                mmin1 = t;
            } else if (t < mmin2) {
                mmin2 = t;
            }
            mmin = min(mmin, t);
        }
        s[i] = mmin2;
    }
    sort(s.begin(), s.end());
    long long ans = 0;
    ans = mmin;
    for (int i = 1; i < n; ++i)ans += s[i];
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) solve();
    return 0;
}
//
// Created by Invalid_index on 2023/8/13.
//
