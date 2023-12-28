#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n + 5];
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    sort(s + 1, s + 1 + n);
    int minn = 1e9 + 1;
    int temp = s[1];
    for (int i = 2; i <= n; i++) {
        minn = min(minn, abs(temp - s[i]));
        temp = s[i];
    }
    cout << minn;
    return 0;
}
//
// Created by Invalid_index on 2023/11/26.
//
