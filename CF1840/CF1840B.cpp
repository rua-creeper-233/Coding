#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;
#define ull unsigned long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k >= 26) {
            cout << (n + 1) << endl;
        } else {
            ull maxn = 1 << k;
            if (n == maxn) {
                cout << n << endl;
            }
            if (n > maxn) {
                cout << maxn << endl;
            }
            if (n < maxn) {
                cout << (n + 1) << endl;
            }
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/6/6.
//
