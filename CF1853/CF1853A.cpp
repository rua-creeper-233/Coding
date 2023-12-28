#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;
vector<struct> point{
    int x,y,z;
}a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[505];
        int maxdif = 1 << 30;
        a[0] = -1 << 16;
        cin >> a[1];
        for (int i = 2; i <= n; i++) {
            cin >> a[i];
            maxdif = min(maxdif, a[i] - a[i - 1]);
        }
        if (maxdif < 0) cout << 0 << endl;
        else cout << maxdif / 2 + 1 << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/7/23.
//
