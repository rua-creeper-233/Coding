#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    int cases = 0;
    while (cin >> m >> n) {
        cases++;
        if (m == 0 && n == 0) break;
        int num[10086] = {};
        int ask[10086] = {};
        for (int i = 1; i <= m; i++) {
            cin >> num[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> ask[i];
        }
        sort(num + 1, num + m + 1);
        cout << "CASE# " << cases << ":\n";
        for (int i = 1; i <= n; i++) {
            if (binary_search(num + 1, num + m + 1, ask[i])) {
                cout << ask[i] << " found at " << lower_bound(num + 1, num + m + 1, ask[i]) - num << endl;
            } else {
                cout << ask[i] << " not found\n";
            }
        }
    }
    return 0;
}
//
// Created by Invalid_index on 24-10-30.
//
