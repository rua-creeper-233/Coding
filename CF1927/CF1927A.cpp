#include<bits/stdc++.h>

using namespace std;

int t;

int main() {
    cin >> t;
    while (t--) {
        int n;
        string a;
        cin >> n >> a;
        int minn = 10005;
        int maxx = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 'B') {
                minn = min(minn, i);
                maxx = max(maxx, i);
            }
        }
        cout << maxx - minn + 1 << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2024/2/6.
//
