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
        deque<int> a;
        int maxx = -1;
        int minn = 1e9 + 1;
        int ans = 0;
        if (n == 1) {
            cout << ans << endl;
        }
        int tem = n;
        while (tem--) {
            int temp;
            cin >> temp;
            maxx = max(temp, maxx);
            minn = min(minn, temp);
            a.push_back(temp);
        }
        while (maxx != minn) {
            maxx += minn;
            maxx /= 2;
            ans++;
        }
        if (ans <= n && n != 1) {
            cout << ans << endl;
            while (ans--) {
                cout << minn << " ";
            }
            cout << endl;
        } else if (ans > n && n != 1) {
            cout << ans << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/11/24.
//
