#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;
bool vis[1005][1005];
int a[1005][1005];
int m, n, p, c;
int disx[] = {0, 0, -1, 1};
int disy[] = {-1, 1, 0, 0};

bool check(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > m || a[x][y] == 0 || vis[x][y]) {
        return false;
    }
    return true;
}

int dfs(int x, int y) {
    int ans = a[x][y];
    vis[x][y] = true;
    for (int i = 0; i <= 3; i++) {
        if (check(x + disx[i], y + disy[i])) {
            ans += dfs(x + disx[i], y + disy[i]);
        }
    }
    return ans;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        memset(vis, 0, sizeof(vis));
        int maxx = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i][j] != 0 || vis[i][j] != 1) {
                    maxx = max(dfs(i, j), maxx);
                }
            }
        }
        cout << maxx << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/7.
//
