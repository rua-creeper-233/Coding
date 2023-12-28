#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a, a + 4);
    int min = a[0] + a[3];
    int max = a[2] + a[1];
    cout << abs(max - min);
    return 0;
}
//
// Created by Invalid_index on 2023/7/1.
//
