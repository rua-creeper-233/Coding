#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 10010;

int n, m;
int g[N][N];
bool st[N][N];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1}; // 四个方向

int dfs(int x, int y) {
    int res = g[x][y];
    st[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int a = x + dx[i], b = y + dy[i];
        if (a >= 1 && a <= n && b >= 1 && b <= m && !st[a][b] && g[a][b] > 0)
            res += dfs(a, b);
    }
    return res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        memset(st, 0, sizeof st);
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> g[i][j];
        int res = 0;
        for (int h = 10000; h >= 1; h--)
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= m; j++)
                    if (!st[i][j] && g[i][j] == h)
                        res = max(res, dfs(i, j));
        cout << res << endl;
    }
    return 0;
}
