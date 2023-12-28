#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m;
const ll N = (ll) 2e5 + 5;
int a[N], b[N], n;
int main() {
    int l = 0, r = 6 * n;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        a[i] = temp;
    }
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        b[i] = temp;
    }
    while (l < r) {
        int flag = 1, mid = (l + r + 1) >> 1;
        ll card = m;
        for (int i = 1; i <= n; i++) {
            if (a[i] >= mid) continue;
            if (a[i] + b[i] < mid || mid - a[i] > card) {
                flag = 0;
                break;
            }
            card -= mid - a[i];
        }
        if (flag) l = mid; else r = mid - 1;
    }
    printf("%d", l);
    return 0;
}
//
// Created by Invalid_index on 2023/12/2.
//
