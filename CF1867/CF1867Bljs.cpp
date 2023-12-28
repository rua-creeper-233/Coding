#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> flag(n + 1, 0);
    int cnt = 0, z0 = 0;
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
        if (str[i] != str[j]) cnt++;
    }
    for (int i = 0; i < n; ++i)
        if (str[i] == '0') {
            z0++;
        }
    if (cnt == 0)flag[n] = true;
    for (int i = cnt; i <= n - cnt; i += 1 + (n % 2 == 0)) {
        flag[i] = true;
    }
    for (int i = 0; i <= n; ++i) {
        cout << flag[i];
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> flag(n + 1, 0);
        int cnt = 0, z = 0;
        for (int i = 0, j = n - 1; i < j; ++i, --j) {
            if (s[i] != s[j]) cnt++;
        }
        for (int i = 0; i < n; ++i)
            if (s[i] == '0') {
                z++;
            }
        if (cnt == 0)flag[n] = true;
        for (int i = cnt; i <= n - cnt; i += 1 + (n % 2 == 0)) {
            flag[i] = true;
        }
        for (int i = 0; i <= n; ++i) {
            cout << flag[i];
        }
        cout << endl;
    }
    return 0;
}//
// Created by Invalid_index on 2023/9/11.
//
