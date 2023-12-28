#include<bits/stdc++.h>
#include <sysinfoapi.h>

#define endl "\n"
using namespace std;
int t;

struct temper {
    int a;
    int num;
} s[(int) 1e5 + 5];
int ss[(int) 1e5 + 5];

bool cmp(temper x, temper y) {
    return x.a < y.a;
}

bool cmpp(temper x, temper y) {
    return x.num < y.num;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    double star_time = GetTickCount();
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        memset(s, 0, sizeof(s));
        memset(ss, 0, sizeof(ss));
        for (int i = 1; i <= n; i++) {
            cin >> s[i].a;
            s[i].num = i;
        }
        for (int i = 1; i <= n; i++) {
            cin >> ss[i];
        }
        sort(s + 1, s + 1 + n, cmp);
        sort(ss + 1, ss + 1 + n);
        for (int i = 1; i <= n; i++) {
            s[i].a = ss[i];
        }
        sort(s + 1, s + 1 + n, cmpp);
        for (int i = 1; i <= n; i++) {
            cout << s[i].a << " ";
        }
        cout << endl;
    }
//    double end_time = GetTickCount();
//    cout << (end_time - star_time) << endl;
    return 0;
}
//
// Created by Invalid_index on 2023/5/19.
//
