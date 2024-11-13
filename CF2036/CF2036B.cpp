#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

struct node {
    long long n = 0;
};

bool cmp(node a, node b) {
    return a.n > b.n;
}

int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, m;
        node s[200005];
        cin >> n >> m;
        int maxa = 0;
        while (m--) {
            int a, b;
            cin >> a >> b;
            s[a].n += b;
            maxa = max(maxa, a);
        }
        int ans = 0;
        sort(s + 1, s + maxa + 1, cmp);
//        cout << "SB" << endl;
//        for (int i = 1; i <= maxa; i++) {
//            cout << s[i].n << endl;
//        }
//        cout << "SB" << endl;
        for (int i = 1; i <= n; i++) {
            ans += s[i].n;
        }
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-2.
//
