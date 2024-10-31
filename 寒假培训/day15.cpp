#include<bits/stdc++.h>

using namespace std;

int dirx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
int diry[8] = {1, -1, 0, 0, 1, -1, 1, -1};
int n, m, sx, sy;
int mapp[105][105];

bool check(int x, int y) {
    if (x < 1 || x > m || y < 1 || y > n || mapp[x][y] == -1) return false;
    return true;
}

void bfs(int x, int y) {
    queue<int> step;
    step.push(x * 10 + y);
    while (!step.empty()) {
        int temp = step.front();
        step.pop();
        int gx = temp / 10;
        int gy = temp % 10;
        for (int i = 0; i < 8; i++) {
            int xx = gx + dirx[i];
            int yy = gy + diry[i];
            if (check(xx, yy) && mapp[xx][yy] == 0) {
                mapp[xx][yy] = mapp[gx][gy] + 1;
                step.push(xx * 10 + yy);
            }
        }
    }
}

int main() {
    cin >> n >> m >> sx >> sy;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            char temp;
            cin >> temp;
            if (temp == '.') mapp[i][j] = 0;
            else mapp[i][j] = -1;
        }
    }
    for (int i = 0; i <= m + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {

            
            cout << mapp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    bfs(n - sx + 1, sy);
    int maxx = -1;
    for (int i = 0; i <= m + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            cout << mapp[i][j] << " ";
            maxx = max(maxx, mapp[i][j]);
        }
        cout << endl;
    }
    cout << maxx << endl;
    return 0;
}
//
// Created by Invalid_index on 2024/2/2.
//
