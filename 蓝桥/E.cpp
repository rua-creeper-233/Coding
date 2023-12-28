#include<bits/stdc++.h>

using namespace std;

int is_prime(int n) {
    int ans = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            ans += i;
//            cout << i << "    " << ans << endl;
        }
    }
//    ans *= 2;
    ans += 1;
    ans += n;
    return ans;
}

int main() {
    int s;
    cin >> s;
    if (s == 1) {
        cout << 1;
        return 0;
    }
    for (int i = s; i >= 1; --i) {
        if (is_prime(i) == s) {
            cout << i;
            return 0;
        }
    }
    cout << "-1";
//    cout << is_prime(280);
    return 0;
}
//
// Created by Invalid_index on 2023/12/2.
//
