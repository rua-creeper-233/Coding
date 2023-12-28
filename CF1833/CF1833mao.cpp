#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int in = 1000000000;
        int odd = 0, even = 0; // odd 表示奇数个数，even 表示偶数个数
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            in = min(in, a[i]);
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 0 || even == 0) { // 如果所有数都是奇数或偶数，则满足条件
            cout << "YES" << endl;
        } else {
            if (in % 2 == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}//
// Created by Invalid_index on 2023/5/20.
//
