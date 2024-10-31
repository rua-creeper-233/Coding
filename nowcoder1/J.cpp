#include<bits/stdc++.h>

using namespace std;
struct point {
    int nowx, nowy;
    int forwardx, forwardy;
};
struct direct {
    int x = 0, y = 0;
} d[(int) 1e5 + 5];
int n, m, k, q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> m >> k >> q;
    int i = 1;
    while (k--) {
        char dd;
        int t;
        cin >> dd >> t;
        if (dd == 'U') {
            d[i].x = 0;
            d[i].y = t;
        }
        if (dd == 'D') {
            d[i].x = 0;
            d[i].y -= t;
        }
        if (dd == 'L') {
            d[i].x -= t;
            d[i].y = 0;
        }
        if (dd == 'R') {
            d[i].x += t;
            d[i].y = 0;
        }
        i++;
    }
    while (q--) {
        int ans = 0;
        int x, y, l, r;
        cin >> x >> y >> l >> r;
        point p;
        p.nowx = x;
        p.nowy = y;
        for (int i = l; i <= r; i++) {
            p.forwardx = p.nowx + d[i].x;
            p.forwardy = p.nowy + d[i].y;
            if (p.forwardx < 0) {
                ans += p.nowx;
                p.nowx = 0;
            }
            if (p.forwardy < 0) {
                ans += p.nowy;
                p.nowy = 0;
            }
            if (p.forwardx > n) {
                ans += n - p.nowx;
                p.nowx = n;
            }
            if (p.forwardy > m) {
                ans += m - p.nowy;
                p.nowy = m;
            } else if (p.forwardx >= 0 && p.forwardy >= 0 && p.forwardx <= n && p.forwardy <= m) {
                p.nowx = p.forwardx;
                p.nowy = p.forwardy;
                ans += abs(d[i].x) + abs(d[i].y);
            }
        }
        cout << p.nowx << " " << p.nowy << " " << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 24-7-16.
//
