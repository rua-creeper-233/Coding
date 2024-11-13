#include<stdio.h>
#include<stdlib.h>

double map[2001][2001], dis[2001], book[2001];
int n, m, i, j, x1, x2, x3, t, l, r;
double q, max, ans;

void dijktra() {
    for (i = 1; i <= n; i++) {
        dis[i] = map[l][i];
    }
    book[l] = 1;
    //Dijkstra
    for (i = 1; i < n; i++) {
        max = 0;
        //找与源点路径上积最大的点
        for (j = 1; j <= n; j++) {
            if (!book[j] && dis[j] > max) {
                max = dis[j];
                t = j;
            }
        }
        book[t] = 1;
        //用这个点的出边去更新其余顶点
        for (j = 1; j <= n; j++) {
            if (!book[j] && dis[t] * map[t][j] > dis[j]) {
                dis[j] = dis[t] * map[t][j];
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%.8lf ", dis[i]);
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", book[i]);
    }
    printf("\n");
    ans = 100 / dis[r];
}

int main() {
    scanf("%d%d", &n, &m);
    //建图
    for (i = 1; i <= n; i++)
        map[i][i] = 1;
    for (i = 1; i <= m; i++) {
        scanf("%d%d%d", &x1, &x2, &x3);
        q = (100 - x3) / 100.0;
        if (q > map[x1][x2]) map[x1][x2] = map[x2][x1] = q;
    }
    scanf("%d%d", &l, &r);
    //dij
    dijktra();
    printf("%.8lf", ans);//注意精度问题
    return 0;
}//
// Created by Invalid_index on 24-11-11.
//
