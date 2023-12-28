#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;
#define ull unsigned long long

ull summ(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 0) {
        return 1;
    }
    return n + summ(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        ull ans = 0;
        int temp, cnt = 0;
        for (int i = 1; i <= n; i++) {
            cin >> temp;
            if (temp <= q) {
                cnt++;
            }
            if (temp > q) {
                ans += summ(cnt - k + 1);
                cnt = 0;
            }
        }
        ans += summ(cnt - k + 1);
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/6/6.
//
