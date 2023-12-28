#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        int oddnum = 0, singnum = 0, minn = 2e5;
        cin >> n;
        int temp[(int) 2e5 + 5];
        for (int i = 1; i <= n; i++) {
            cin >> temp[i];
            if (temp[i] % 2 == 0) {
                oddnum++;
            } else {
                singnum++;
            }
        }
        sort(temp + 1, temp + 1 + n);
        if (singnum == 0 || oddnum == 0) {
            cout << "YES" << endl;
        } else {
            if (temp[1] % 2 == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }

        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/19.
//
