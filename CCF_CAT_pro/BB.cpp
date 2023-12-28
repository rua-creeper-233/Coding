#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 5];
        int answe = 0, k = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (!i)k = a[i];
            else k &= a[i];
        }
        if (k > 0) {
            cout << 1 << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                if (a[i] == 0) {
                    answe++;
                    continue;
                }
                int temp = a[i];
                i++;
                while (i < n && temp != 0) {
                    temp &= a[i];
                    i++;
                }
                answe++;
                if (i == n && temp != 0) {
                    answe--;
                    break;
                }
                i--;
            }
            cout << answe << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/7/7.
//
