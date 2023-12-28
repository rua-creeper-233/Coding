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
        int a[n];
        for (int i = 0; i < n; i++) {
            char temp;
            cin >> temp;
            if (temp == '<') {
                a[i] = 0;
            }
            if (temp == '>') {
                a[i] = 1;
            }
        }
        int maxx = 1, axx = 1;
        int ls = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] == ls) {
                maxx++;
            } else {
                ls = a[i];
                axx = max(axx, maxx);
                maxx = 1;
            }
        }
        axx = max(axx, maxx);
        int ans = 1 + axx;
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/25.
//
