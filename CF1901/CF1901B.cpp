#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

void solve() {
    int n;
    cin >> n;
    vector<int> a;
    a.push_back(1);
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        int temp = 0;
        cin >> temp;
        if (temp > a.back())ans += temp - a.back();
        a.push_back(temp);
    }
    cout << ans << endl;
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
// Created by Invalid_index on 2023/11/24.
//
