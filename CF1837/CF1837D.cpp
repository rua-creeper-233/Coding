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
        int len;
        string s;
        int miros[(int) 2e5 + 5];
        memset(miros, 0, sizeof(miros));
        cin >> len >> s;
        if (len % 2) {
            cout << "-1" << endl;
        }
        int last = 0;
        int start = 0;
        for (int i = len - 1; i >= 0; i++) {
            while (s[i - 1] != ')') {
                last++;
            }
        }
        for (int i = 0; i < len; i++) {
            if (s[i + 1] == '(') {
                break;
            }
            start++;
            miros[i] = 1;//")"
        }
        int temps = start;
        while (start--) {
            if (s[temps] == '(') {
                miros[temps] = 1;
                s[temps] = ' ';
            }
            temps++;
        }
        int tempe = len - last;
        while (last--) {
            if (s[tempe] == ')') {
                miros[tempe] = 1;
                s[tempe] = ' ';
            }
            tempe--;
        }
        for (int i = 0; i < len; i++) {
            cout << miros[i] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/26.
//
