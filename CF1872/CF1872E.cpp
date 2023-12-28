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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        string ss;
        cin >> ss;
        int ti;
        cin >> ti;
        for (int i = 0; i < ti; i++) {
            int q;
            cin >> q;
            if (q == 1) {
                int l, r;
                cin >> l >> r;
                for (int j = l - 1; j < r; j++) {
                    if (ss[j] == '0') {
                        ss[j] = '1';
                    } else {
                        ss[j] = '0';
                    }
                }
            } else {
                int k;
                cin >> k;
                int ans = 0;
                for (int j = 0; j < n; j++) {
                    if (ss[j] == k + '0') {
                        ans = ans ^ arr[j];
                    }
                }
                cout << ans << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/9/7.
//
