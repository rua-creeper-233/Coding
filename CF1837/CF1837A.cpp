#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;
const int maxn = (int) 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (abs(n) % abs(k) != 0) {
            cout << "1" << endl << n << endl;
        } else {
            cout << "2" << endl << 1 << " " << n - 1 << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/25.
//