#include<bits/stdc++.h>

using namespace std;

int n, f;
int num[200005], sum[200005];
const int mod = 10000007;


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
