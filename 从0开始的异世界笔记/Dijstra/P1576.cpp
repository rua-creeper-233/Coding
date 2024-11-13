#include<bits/stdc++.h>

using namespace std;
#define INF 0x3f3f3f3f
#define endl "\n"

double mapp[2005][2005];

int n, m;

double ans = 1;

void dij(int s, int e, int num) {
    double dist[num + 1];
    bool vis[num + 1];
    int ori[num + 1];
    for (int i = 1; i <= num; i++) {
        dist[i] = mapp[s][i];
        vis[i] = false;
        ori[i] = -1;
    }//Initialization
    dist[s] = 1;
    for (int i = 1; i < num; i++) {//此时要少一个，因为出发顶点的距离是0，已经干掉了
        //找到积最大的点，并且vis为false
        double maxx = -1;
        int MinIndex = -1;
        for (int j = 1; j <= num; j++) {
            if (!vis[j] && dist[j] > maxx) {
                maxx = dist[j];
                MinIndex = j;
            }
        }
        vis[MinIndex] = true;
        for (int j = 1; j <= num; j++) {
            if (!vis[j] && dist[MinIndex] * mapp[MinIndex][j] > dist[j]) {//判断路径是否存在，是否访问过
                dist[j] = dist[MinIndex] * mapp[MinIndex][j];
                ori[j] = MinIndex;
            }
        }
    }
    ans = 100 / dist[e];
//    for (int i = 1; i <= num; i++) {
//        cout << fixed << setprecision(8) << dist[i] << " ";
//    }
//    cout << endl;
//    for (int i = 1; i <= num; i++) {
//        cout << vis[i] << " ";
//    }
//    cout << endl;
//    for (int i = 1; i <= num; i++) {
//        cout << ori[i] << " ";
//    }
//    cout << endl;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        mapp[i][i] = 1;
    }
    while (m--) {
        int a, b, cost;
        cin >> a >> b >> cost;
        double temp = 1 - (double) cost / 100;
        mapp[a][b] = mapp[b][a] = max(mapp[a][b], temp);
    }
    int star, en;
    cin >> star >> en;
    dij(star, en, n);
    cout << fixed << setprecision(8) << ans << endl;
    return 0;
}
//
// Created by Invalid_index on 24-11-5.
//

//
// Created by Invalid_index on 24-11-12.
//
