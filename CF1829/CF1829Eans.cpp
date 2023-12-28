#include<bits/stdc++.h>

using namespace std;
int n, m;
bool vis[1020][1020];
int a[1020][1020];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

bool check(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > m || a[x][y] == 0 || vis[x][y]) {
        return false;
    }
    return true;
}

int dff(int x, int y) {
    vis[x][y] = 1;
    int ans = a[x][y];
    for (int i = 0; i < 4; i++) {
        if (check(x + dx[i], y + dy[i])) {
            ans += dff(x + dx[i], y + dy[i]);
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        memset(vis, 0, sizeof(vis));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        int maxx = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (!vis[i][j] && a[i][j]) {
                    maxx = max(maxx, dff(i, j));
                }
            }
        }
        cout << maxx << endl;
    }
    return 0;
}