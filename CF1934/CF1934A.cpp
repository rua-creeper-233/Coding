#include<bits/stdc++.h>

using namespace std;
#define int long long
const int N = 1e5 + 10;
// int p = 80112002;
int a[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)cin >> a[i];
    sort(a + 1, a + 1 + n);
    int ans = 0;

    int l1 = a[1];
    int l2 = a[2];
    int r1 = a[n];
    int r2 = a[n - 1];
    ans += abs(l1 - r1);
    ans += abs(r1 - l2);
    ans += abs(r2 - l2);
    ans += abs(r2 - l1);

    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _;
    cin >> _;
    while (_--)solve();
    return 0;
}
//
// Created by Invalid_index on 2024/3/1.
//
