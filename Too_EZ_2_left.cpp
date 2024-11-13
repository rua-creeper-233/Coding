#include<bits/stdc++.h>

using namespace std;
#define INF 65534
#define endl "\n"

unsigned short mapp[(int) 1e4 + 5][(int) 1e4 + 5];

unsigned short Minn(unsigned short a, unsigned short b) {
    return a < b ? a : b;
}

int n, m, s;

void dij(int s, int num) {
    int dist[num + 1];
    bool vis[num + 1];
    int ori[num + 1];
    for (int i = 1; i <= num; i++) {
        dist[i] = mapp[s][i];
        vis[i] = false;
        ori[i] = -1;
    }//Initialization
    dist[s] = 0;
    for (int i = 1; i < num; i++) {
        int minn = INF + 1;
        int MinIndex = -1;
        for (int j = 1; j <= num; j++) {
            if (!vis[j] && dist[j] < minn) {
                minn = dist[j];
                MinIndex = j;
            }
        }
        vis[MinIndex] = true;
        for (int j = 1; j <= num; j++) {
            if (!vis[j] && dist[MinIndex] + mapp[MinIndex][j] < dist[j]) {
                dist[j] = dist[MinIndex] + mapp[MinIndex][j];
                ori[j] = MinIndex;
            }
        }
    }
    for (int i = 1; i <= num; i++) {
        if (dist[i] == INF && !vis[i]) cout << "2147483647 ";
        else cout << dist[i] << " ";
    }
}

int main() {
    cin >> n >> m >> s;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) mapp[i][j] = 0;
            else
                mapp[i][j] = INF;
        }
    }
    while (m--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b) continue;
        else mapp[a][b] = Minn(mapp[a][b], c);
    }
    dij(s, n);
    return 0;
}


//
// Created by Invalid_index on 24-11-5.
//
