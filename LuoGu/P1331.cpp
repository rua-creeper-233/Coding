#include<bits/stdc++.h>

using namespace std;

bool flag = 1;
int mapp[1005][1005];
int xx[] = {0, 0, 1, -1};
int yy[] = {1, -1, 0, 0};

bool check(int x, int y) {
    if (mapp[x][y] + mapp[x + 1][y] + mapp[x][y + 1] + mapp[x + 1][y + 1] == 3) return 0;
    return 1;
}

void dfs(int x, int y) {
    if (!mapp[x][y]) return;
    mapp[x][y] = 0;
    for (int i = 0; i < 4; i++) {
        dfs(x + xx[i], y + yy[i]);
    }
    return;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            char temp;
            cin >> temp;
            if (temp == '#') {
                mapp[i][j] = 1;
            } else mapp[i][j] = 0;
        }
    }
//    for (int k = 1; k <= m; k++) {
//        for (int l = 1; l <= n; l++) {
//            cout << mapp[k][l];
//        }
//        cout << endl;
//    }
//    cout << endl;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (!check(i, j)) {
                flag = 0;
                break;
            }
            if (!flag) {
                cout << "Bad placement.";
                return 0;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (mapp[i][j]) {
                dfs(i, j);
                ans++;
//                for (int k = 0; k <= m + 1; k++) {
//                    for (int l = 0; l <= n + 1; l++) {
//                        cout << mapp[k][l];
//                    }
//                    cout << endl;
//                }
//                cout << endl << ans << endl;
            }
        }
    }
    cout << "There are " << ans << " ships.";
    return 0;
}
//
// Created by Invalid_index on 2024/1/4.
//
