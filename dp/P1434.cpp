#include<bits/stdc++.h>

using namespace std;
int t, n, m;
struct mapp {
    int x, y, h;
} f[10001];//h高度，x横坐标，y纵坐标
int l[10001];//每个点的最优解
int ans;//最优解
int max(int x, int y) { return x > y ? x : y; }

int min(int x, int y) { return x < y ? x : y; }

short dx[4] = {-1, 0, 1, 0};//四个方向扩展
short dy[4] = {0, 1, 0, -1};

void write(int x)//输出优化
{
    if (x < 0) {
        x = -x;
        putchar(45);
    }
    if (x > 9) write(x / 10);
    putchar(x % 10 + 48);
    return;
}

bool cmp(mapp x, mapp y) { return x.h > y.h; }//按高度排序
void solve() {
    int b;
    cin >> b >> m;//这里用b，是为了方便保存横纵坐标
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> f[++n].h;
            f[n].x = i;//横坐标
            f[n].y = j;//纵坐标
        }
    }
    sort(f + 1, f + 1 + n, cmp);//排序
    return;
}
/*冒泡排序*/
bool check(int i, int j)//看f[i]能否到达f[j]
{
    for (int k = 0; k <= 3; k++)
        if (f[i].x + dx[k] == f[j].x && f[i].y + dy[k] == f[j].y) return true;//可以到达
    return false;//否则
}

void dp() {
    for (int i = 1; i <= n; i++) {
        l[i] = 1;//每个点的初始长度就是1
        for (int j = i - 1; j > 0; j--)
            if (check(i, j) && f[j].h > f[i].h)//如果可以到达
                l[i] = max(l[i], l[j] + 1);//动态转移
    }
    for (int i = 1; i <= n; i++) {
        ans = max(ans, l[i]);
    }
    cout << ans;//输出
    return;
}

int main() {
    solve();
    dp();
    return 0;
}
