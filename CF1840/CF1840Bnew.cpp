#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int temp = log2(n);
        if (temp >= k) {
            cout << (1 << k) << endl;
        } else {
            cout << (n + 1) << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/6/7.
//
