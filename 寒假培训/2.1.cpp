#include<bits/stdc++.h>

using namespace std;

int ans;

bool is_prime(int n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (!(n % i)) return false;
    }
    return true;
}

void dfs() {

}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i: a) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
}
//
// Created by Invalid_index on 2024/2/1.
//
