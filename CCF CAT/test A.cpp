#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, n;
    cin >> a >> b >> n;
    int sum = abs(a + b);
    int step = n - sum;
    if (step >= 0 && step % 2 == 0) {
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}
//
// Created by Invalid_index on 2023/7/1.
//
