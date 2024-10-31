#include<bits/stdc++.h>

using namespace std;
int t;

int main() {
    cin >> t;
    while (t--) {
        long long ans = 0;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            int temp1, temp2;
            cin >> temp1 >> temp2;
            ans += min(temp1, temp2);
        }
        cout << ans << endl;
    }
    return 0;
}
// Created by Invalid_index on 2024/2/17.
//
