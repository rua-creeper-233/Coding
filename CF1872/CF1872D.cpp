#include <bits/stdc++.h>

#define endl "\n"
#define ull long long
using namespace std;

ull gcd(ull a, ull b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

ull lcm(ull a, ull b) {
    return a * b / gcd(a, b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ull n, x, y;
        cin >> n >> x >> y;
        int k = n / lcm(x, y);
        x = n / x - k;
        y = n / y - k;
        ull suma = 0, sumb = 0;
        suma = (n + n - x + 1) * x / 2;
        sumb = (1 + y) * y / 2;
        ull ans = suma - sumb;
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/9/7.
//
