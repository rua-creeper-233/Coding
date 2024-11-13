#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int upp(int n) {
    if (n % 2 == 0) return n / 2;
    else
        return n / 2 + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, mid;
        cin >> n >> mid;
        if (n == 1 && mid == 1) {
            cout << "1" << endl;
            cout << "1" << endl;
            continue;
        }
        if (mid > upp(n)) {
            cout << "-1" << endl;
            continue;
        } else {
            set<int> so;
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    so.insert(i);
                    so.insert(n / i);
                } else {
                    continue;
                }
            }
            int ans = 0;
            for (int it: so) {
                if (mid % it == upp(it)) {
                    ans = it;
                    break;
                }
            }
            cout << n / ans << endl;
            for (int i = 1; i <= n; i += ans) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-1.
//
