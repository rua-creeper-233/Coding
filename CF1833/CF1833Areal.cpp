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
        char s[n];
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
        }
        int ans = 0;
        char r[n][2];
        memset(r, 0, sizeof(r));
        for (int i = 1; i <= n - 1; i++) {
            char c = s[i];
            char cc = s[i + 1];
            for (int j = 1; j <= n - 1; j++) {
                if (c == r[j][0] && cc == r[j][1]) {
                    break;
                } else if (r[j][0] == 0) {
                    ans++;
                    r[j][0] = c;
                    r[j][1] = cc;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

//
// Created by Invalid_index on 2023/5/19.
//
