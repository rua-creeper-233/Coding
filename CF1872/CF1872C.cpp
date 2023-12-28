#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

int isprime(int number) {
    for (int i = 2; i <= sqrt(number); i++) {
        if (!(number % i))return i;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        if (l == r) {
            int a = isprime(l);
            if (a == 0) {
                cout << -1 << endl;
            } else {
                cout << a << " " << l - a << endl;
            }
        } else {
            if (l % 2 != 0) {
                if (l == 1) {
                    if (r <= 3) {
                        cout << -1 << endl;
                    } else {
                        cout << 2 << " " << 2 << endl;
                    }
                } else if ((l + 1) > r) {
                    cout << -1 << endl;
                } else {
                    cout << 2 << " " << l - 1 << endl;
                }
            } else {
                if ((2 + l) > r) {
                    if (l == 2) {
                        cout << -1 << endl;
                    } else {
                        cout << 2 << " " << l - 2 << endl;
                    }
                } else {
                    cout << 2 << " " << l << endl;
                }

            }
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/9/7.
//
