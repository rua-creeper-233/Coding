#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int dfs(int x, int y, int i1) {
    if (x == y) return 1;
    else if (x < y) return 0;
    else {
        if (x % 3 != 0) return 0;
        else return max(dfs(x / 3, y, 0), dfs(x / 3 * 2, y, 0));
    }
}

int main() {
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (dfs(n, m, 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/11.
//
