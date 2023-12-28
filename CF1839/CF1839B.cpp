#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

struct lamp {
    int a, b;
};

bool cmp(lamp x, lamp y) {
    if (x.a != y.a) {
        return x.a < y.a;
    }
    return x.b > y.b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        lamp s[n + 3];
        for (int i = 1; i <= n; i++) {
            cin >> s[i].a >> s[i].b;
        }
        int ans = 0;
        int cur = 1;
        sort(s + 1, s + 1 + n, cmp);
        for (int i = s[1].a; i <= s[n].a; i++) {
            int count = i;
            for (int j = cur; j <= n; j++) {
                if(count!=0&&s[1])
            }
        }
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/6/3.
//
