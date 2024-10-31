#include<bits/stdc++.h>

using namespace std;
#define int long long
const int N = 2e5 + 10;
const int p = 1e9 + 7;
int a[N], dp[N];

void solve() {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum = (sum % p + a[i]) % p;
        //cout << sum << ' ';
    }
    int cnt = -0x3f3f3f3f;
    for (int i = 1; i <= n; i++) {
        dp[i] = max(dp[i - 1] + a[i], a[i]);
        cnt = max(cnt, dp[i]);
    }
    if (cnt <= 0) {
        sum = (sum % p + p) % p;
        cout << sum << '\n';
    } else {
        for (int i = 1; i <= k; i++) {
            sum = (sum % p + p) % p;
            sum = (sum + cnt % p) % p;
            cnt = cnt * 2 % p;
        }
        cout << sum << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _;
    cin >> _;
    while (_--)solve();
    return 0;
}