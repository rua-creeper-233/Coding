#include<bits/stdc++.h>

using namespace std;
unsigned long long t;
unsigned long long _;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> _;
    // while (_--) {
    t = _;
    cout << "    Now     " << _ << "         Max_Answer:   ";
    int temp = t;
    for (unsigned long long i = 1; i <= t; i++) {
        unsigned long long b = temp;
        unsigned long long c = b ^ i;
        if (__gcd(b, i) == c) {
            cout << i << endl;
            goto Next;
        }
    }
    Next:;
    // }
    return 0;
}
//
// Created by Invalid_index on 24-7-18.
//
