#include<bits/stdc++.h>

//#define endl "\n"
using namespace std;
int t;

int gett() {
    int out;
    cin >> out;
    if (out == -2)exit(0);
    return out;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)cin >> a[i];
    int k = -1;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] != i) {
            k = i;
            break;
        }
    }
    if (k == -1) {
        k = n;
    }
    cout << k << endl;
    while ((k = gett()) != -1) {
        cout << k << endl;
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
}
//
// Created by Invalid_index on 2023/9/11.
//
