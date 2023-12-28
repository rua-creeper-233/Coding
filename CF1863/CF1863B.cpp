#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

struct nums {
    int nu;
    int num;
} s[100005];

bool cmp(nums a, nums b) {
    return a.nu < b.nu;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> s[i].nu;
            s[i].num = i;
        }
        sort(s + 1, s + 1 + n, cmp);
//        for (int i = 1; i <= n; i++) {
//            cout << s[i].num << " ";
//        }
//        cout << endl;
        int temp = s[1].num;
        int ans = 0;
        for (int i = 2; i <= n; i++) {
            if (s[i].num < temp) {
                ans++;
            }
            temp = s[i].num;
        }
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/8/30.
//
