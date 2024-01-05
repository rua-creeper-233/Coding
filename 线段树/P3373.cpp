#include<bits/stdc++.h>

using namespace std;
const int maxn = 10000;
#define ll long long

struct tree {
    int l, r;
    ll sum, lazy_tag_plus = 0, lazy_tag_mul = 1;
};

int a[maxn + 3];
tree t[4 * maxn + 3];

void build(int p, int l, int r) {
    t[p].l = l;
    t[p].r = r;
    if (l == r) {
        t[p].sum = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(p * 2, l, mid);
    build(p * 2 + 1, mid + 1, r);
    t[p].sum = t[p * 2].sum + t[p * 2 + 1].sum;
}

void spread(int p, int m) {
    if (t[p].lazy_tag_mul) {
        t[p * 2].sum *= t[p].lazy_tag_mul;
        t[p * 2 + 1].sum *= t[p].lazy_tag_mul;
        t[p * 2].lazy_tag_mul %= m;
        t[p * 2 + 1].lazy_tag_mul %= m;
        t[p * 2].lazy_tag_mul *= t[p].lazy_tag_mul;
        t[p * 2 + 1].lazy_tag_mul *= t[p].lazy_tag_mul;
        t[p].lazy_tag_mul = 1;
    }
    if (t[p].lazy_tag_plus) {
        t[p * 2].sum += t[p].lazy_tag_plus * (t[p * 2].r - t[p * 2].l + 1);
        t[p * 2 + 1].sum += t[p].lazy_tag_plus * (t[p * 2 + 1].r - t[p * 2 + 1].l + 1);
        t[p * 2].lazy_tag_plus += t[p].lazy_tag_plus;
        t[p * 2 + 1].lazy_tag_plus += t[p].lazy_tag_plus;
        t[p].lazy_tag_plus = 0;
    }
}

void change_mul(int p, int l, int r, int k, int m) {
    if (l <= t[p].l && r >= t[p].r) {
        t[p].sum *= k;
        t[p].lazy_tag_mul += k;
        t[p].lazy_tag_plus *= k;
        return;
    }
    spread(p, m);
    int mid = (t[p].l + t[p].r) >> 1;
    if (l <= mid) change_mul(p * 2, l, r, k, m);
    if (r > mid) change_mul(p * 2 + 1, l, r, k, m);
    t[p].sum = t[p * 2].sum + t[p * 2 + 1].sum;
}

void change_plus(int p, int l, int r, int k, int m) {
    if (l <= t[p].l && r >= t[p].r) {
        t[p].sum += k * (t[p].r - t[p].l + 1);
        t[p].lazy_tag_plus += k;
        return;
    }
    spread(p, m);
    int mid = (t[p].l + t[p].r) >> 1;
    if (l <= mid) change_plus(p * 2, l, r, k, m);
    if (r > mid) change_plus(p * 2 + 1, l, r, k, m);
    t[p].sum = t[p * 2].sum + t[p * 2 + 1].sum;
}

ll ask(int p, int l, int r, int m) {
    if (l <= t[p].l && r >= t[p].r) return t[p].sum;
    spread(p, m);
    int mid = (t[p].l + t[p].r) >> 1;
    ll ans = 0;
    if (l <= mid) ans += ask(p * 2, l, r, m);
    if (r > mid) ans += ask(p * 2 + 1, l, r, m);
    return ans;
}

int main() {
    int p, q, m;
    ios::sync_with_stdio(false);
    cin.tie(0);
//    cout.tie(0);
    cin >> p >> q >> m;
    for (int i = 1; i <= p; i++) {
        cin >> a[i];
    }
    while (q--) {
        int op, l, r, k;
        cin >> op;
        if (op != 3) {
            cin >> l >> r >> k;
            if (op == 1) {
                change_mul(1, l, r, k, m);
            }
            if (op == 2) {
                change_plus(1, l, r, k, m);
            }
        } else {
            cin >> l >> r;
            cout << ask(1, l, r, m) << endl;
        }
    }
}
//
// Created by Invalid_index on 2023/12/30.
//
