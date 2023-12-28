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
        string temp;
        cin >> temp;
        int flag3 = 0, flag1 = 0;
        for (int i = 0; i < 10; i++) {
            if (temp[i] == '3') {
                flag3 = 1;
                break;
            }
            if (temp[i] == '1') {
                flag1 = 1;
                break;
            }
        }
        if (flag3) {
            cout << "31" << endl;
        }
        if (flag1) {
            cout << "13" << endl;
        }
    }
    return 0;
}//
// Created by Invalid_index on 2023/8/31.
//
