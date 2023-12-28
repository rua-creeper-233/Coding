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
        int en;
        int temp;
        cin >> n >> en;
        cin >> temp;
        int maxx = temp;
        for (int i = 1; i < n; i++) {
            int t = 0;
            cin >> t;
            maxx = max(maxx, t - temp);
            temp = t;
        }
        maxx = max(maxx, 2 * (en - temp));
        cout << maxx << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/11/24.
//
