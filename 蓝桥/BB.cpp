#include<bits/stdc++.h>

using namespace std;
#define ll long long
const ll maxn = (ll) 2e5 + 5;
ll n, m, a[maxn], b[maxn];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    int l = 0, r = 10 * n;
    while (l < r) {
        int flag = 1;
        int mid = (l + r + 1) >> 1;
        ll card = m;
        for (int i = 1; i <= n; i++) {
            if (a[i] >= mid) continue;
            if (a[i] + b[i] < mid || mid - a[i] > card) {
                flag = 0;
                break;
            }
            card -= mid - a[i];
        }
        if (flag) l = mid;
        else r = mid - 1;
    }
    cout << l;
    return 0;
}

//
// Created by Invalid_index on 2023/12/2.
//
