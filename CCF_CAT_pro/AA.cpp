#include<bits/stdc++.h>

using namespace std;
int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, k;
        long long ans = 0;
        cin >> n >> k;
        vector<int> ss(n + 1), s(n + 1, 0);
        for (int i = 1; i <= n; ++i)cin >> ss[i];
        for (int i = 1; i < n; ++i) {
            s[i] = abs(ss[i + 1] - ss[i]);
        }
        sort(s.begin(), s.end(), greater<int>());
        if (k >= n)ans = 0;
        else {
            for (int i = k - 1; i < n; ++i) {
                ans += s[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/7/7.
//
