#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    if (k == 3) {
        if (m <= n) {
            cout << 0 << endl;
            return;
        }
        cout << m - n - (m / n - 1) << endl;
        return;
    }
    if (k == 1) {
        cout << 1 << endl;
        return;
    }

    if (k > 3) {
        cout << 0 << endl;
        return;
    }
    if (k == 2) {
        if (m <= n) {
            cout << m << endl;
            return;
        }
        cout << n + (m / n - 1) << endl;
        return;
    }
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
}//
// Created by Invalid_index on 2023/10/8.
//
