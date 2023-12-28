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
        int a, b;
        cin >> a >> b;
        int start = 1;
        int step = 1;
        while (1) {
            start += b;
            if (start >=a) {
                step++;
                break;
            }
            step++;
        }
        cout << step << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/6/4.
//
