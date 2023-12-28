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
        string s;
        cin >> s;
        if (n % 2) {
            for (int i = 1; i <= n / 2; i++) {
                cout << "0";
            }
            cout << "11";
            for (int i = 1; i <= n / 2; i++) {
                cout << "0";
            }
        } else {
            for (int i = 1; i <= n / 2; i++) {
                cout << "0";
            }
            cout << "1";
            for (int i = 1; i <= n / 2; i++) {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}//
// Created by Invalid_index on 2023/9/11.
//
