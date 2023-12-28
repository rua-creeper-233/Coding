#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

struct room {
    int num;
    int time;
} trap[105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n;
        int minn = 99999;
        for (int i = 1; i <= n; i++) {
            cin >> a >> b;
            minn = min(minn, a + (int) ((b - 1) / 2));
        }
        cout << minn << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/9/7.
//
