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
        int n, m;
        cin >> n >> m;
        vector mapp(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mapp[i][j];
            }
        }
        int ans = 0;
        int maxn = min(n, m) / 2;
        for (int i = 0; i < maxn; i++) {
            string temp;
//            cout << "1\n";
            for (int j = i; j < m - i - 1; j++) {
                temp += mapp[i][j];
            }
//            cout << temp << endl;
            for (int k = i; k < n - i - 1; k++) {
                temp += mapp[k][m - i - 1];
            }
//            cout << temp << endl;
            for (int j = m - i - 1; j >= i; j--) {
                temp += mapp[n - i - 1][j];
            }
//            cout << temp << endl;
            for (int k = n - i - 2; k > i; k--) {
                temp += mapp[k][i];
            }
//            cout << temp << endl;
            temp += temp.substr(0, 3);
            int pos = 0;
            while (temp.find("1543", pos) != string::npos) {
                pos = temp.find("1543", pos);
                ans++;
                pos++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-3.
//
