#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int upp(int a, int b) {
    if (a % b == 0) {
        return a / b;
    } else {
        return a / b + 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        c *= 2;
        int minn = min(a, b);
        int maxx = max(a, b);
        int last = maxx - minn;
        cout << upp(last, c) << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/9/7.
//
