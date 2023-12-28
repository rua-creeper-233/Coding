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
        string s;
        cin >> s;
        if (s[0] == '?') {
            s[0] = '0';
        }
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == '?' && s[i - 1] == '1') {
                s[i] = '1';
            } else if (s[i] == '?') {
                s[i] = '0';
            }
        }
        cout << s << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/25.
//
