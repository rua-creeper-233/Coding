#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;

struct tree {
    int l, r;
    int sum, lazy_tag;
} t[4 * maxn + 3];

void build(int l, int r, int p) {
    t[p].l = l;
    t[p].r = r;
    if (l == r) {
        t[p].sum = 0;
        return;
    }
    int mid = (l + r) >> 1;
    build(l, mid, p * 2);
    build(mid + 1, r, p * 2 + 1);
    t[p].sum = t[p * 2].sum + t[p * 2 + 1].sum;
}

void change(int l, int r, int p) {
    if (l <= t[p].l && r >= t[p].r) {
        t[p].sum +=
        t[p].lazy_tag += ;
        return;
    }
    int mid = (t[p].l + t[p].r) >> 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    cin >> n >> m;
    while (m--) {
        int cases, l, r;
        cin >> cases >> l >> r;
        if (cases) {
            cout << ask(l, r, 1) << endl;
        }
        if (!cases) {
            change(l, r, 1);
        }
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-1.
//
