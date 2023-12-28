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
        vector<pair<int, int>> a(n);
        vector<int> k(n, 0);
        for (int i = 0; i < n; ++i) {
            cin >> k[i];
            a[i] = {k[i], 0};
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; ++i)a[i].second = n - i;
        vector<bool> flag(n, 0);
        for (int i = 0; i < n; ++i) {
            int key = k[i];
            for (int j = 0; j < n; ++j)
                if (a[j].first == key && !flag[j]) {
                    flag[j] = true;
                    cout << a[j].second << ' ';
                    break;
                }
        }
        cout << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/9/11.
//
