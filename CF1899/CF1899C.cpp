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
        int n;
        cin >> n;
        long long a[n],s[n];
        int flag = -1;
        long long ans = -2000;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0 || flag == -1) {
                s[i] = a[i];
                ans = max(s[i], ans);
                flag = abs(a[i] % 2);
            } else {
                if (abs(a[i] % 2) != flag && s[i - 1] > 0) {
                    s[i] = s[i - 1] + a[i];
                    ans = max(s[i], ans);
                    flag = abs(a[i] % 2);
                } else {
                    s[i] = a[i];
                    ans = max(s[i], ans);
                    flag = abs(a[i] % 2);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/11/17.
//
