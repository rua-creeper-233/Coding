#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

struct vill {
    int peo, cost;
} s[(int) 1e5 + 5];

bool cmp(vill a, vill b) {
    if (a.cost == b.cost) {
        return a.peo > b.peo;
    }
    return a.cost < b.cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, ori;
        cin >> n >> ori;
        int moreori = 0, ans = ori;
        for (int i = 1; i <= n; i++) {
            cin >> s[i].peo;
        }
        for (int i = 1; i <= n; i++) {
            cin >> s[i].cost;
            if (s[i].cost > ori) {
                moreori++;
            }
        }
        sort(s + 1, s + 1 + n, cmp);
        int tt = moreori;
        int all = n - 1;
        for (int i = 1; i <= n - tt; i++) {
            if (all == 0) {
                break;
            }
            all -= s[i].peo;
            moreori -= s[i].peo;
            ans += s[i].peo * s[i].cost;
            if (all < 0) {
                int temp = all;
                all = 0;
                ans += s[i].cost * temp;
            }
        }
        if (moreori < 0) {
            moreori = 0;
        }
        ans += ori * moreori;
        cout << ans << endl;
    }
    return 0;
}