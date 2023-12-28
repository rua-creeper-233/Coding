#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (!(n % 3)) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/11/17.
//
