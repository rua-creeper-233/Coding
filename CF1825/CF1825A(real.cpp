#include<bits/stdc++.h>

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
        bool hw = true;
        bool other = false;
        for (int i = 1; i < s.length(); i++) {
            if (s[0] != s[i]) {
                other = true;
            }
        }
        if (other) {
            if (s.length() % 2 == 0) {
                for (int i = 0; i < s.length() / 2; i++) {
                    if (s[i] != s[s.length() - i - 1]) {
                        hw = false;
                    }
                }
            } else {
                for (int i = 0; i <= (s.length() / 2) - 1; i++) {
                    if (s[i] != s[s.length() - 1 - i]) {
                        hw = false;
                    }
                }
            }
            if (hw) {
                cout << s.length() - 1 << endl;
            } else {
                cout << s.length() << endl;
            }
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/8.
//
