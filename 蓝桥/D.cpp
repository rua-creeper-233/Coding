#include<bits/stdc++.h>

using namespace std;

int n, f;
int num[200005], sum[200005];
const int mod = 10000007;

/*快速排序*/
void quick_sort(int l, int r) {
    if (l >= r) return;
    int i = l, j = r, x = num[(l + r) >> 1];
    while (i <= j) {
        while (num[i] < x) i++;
        while (num[j] > x) j--;
        if (i <= j) {
            swap(num[i], num[j]);
            i++;
            j--;
        }
    }
    quick_sort(l, j);
    quick_sort(i, r);
}
/*状态压缩动态规划*/
void dp() {
    int dp[1 << n];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i] && !(i & (1 << j)) && num[j + 1] > f) {
                dp[i | (1 << j)] += dp[i];
                dp[i | (1 << j)] %= mod;
            }
        }
    }
    cout << dp[(1 << n) - 1];
}
/*暴力枚举*/
void solve() {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (num[i] > f) ans++;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (f * i < abs(sum[j + i] - sum[j])) ans++;
            ans %= mod;
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> f;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        if (num[i] > f) ans++;
        sum[i] += sum[i - 1] + num[i];
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= n - i ; j++) {
            if (f * i < abs(sum[j + i] - sum[j])) ans++;
            ans %= mod;
        }
    }
    cout << ans;
    return 0;
}
//
// Created by Invalid_index on 2023/12/2.
//
