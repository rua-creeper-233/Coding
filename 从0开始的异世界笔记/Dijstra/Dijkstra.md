# Dijkstra

Dijkstra算法是一种贪心算法，用于解决单源最短路径问题。时间复杂度为O(n^2)。

使用时需要注意的是，Dijkstra算法不能处理负权边，如果图中存在负权边，可以使用Bellman-ford。

Dijkstra算法的基本思想是：从源点开始，每次找到距离源点最近的一个点，然后以这个点为中心进行扩展，最终得到源点到其余所有点的最短路径。

Dijkstra算法的步骤如下：

1. 初始化：将源点到自己的距离设为0，其他点到源点的距离设为无穷大。
2. 选择：从未访问的点中选择一个距离源点最近的点，将其标记为已访问。
3. 更新：更新与该点相邻的点的距离，如果通过该点到达另一个点的距离小于直接到达的距离，则更新距离。
4. 重复：重复2和3，直到所有点都被访问。
5. 输出：输出源点到各个点的最短路径。

```cpp
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
        int minn = INF + 1;//避免相同的INF值
        int MinIndex = -1;
        for (int j = 1; j <= num; j++) {
            //找到距离源点最近的点
            if (!vis[j] && dist[j] < minn) {
                minn = dist[j];
                MinIndex = j;
            }
        }
        vis[MinIndex] = true;
        for (int j = 1; j <= num; j++) {
            //更新与该点相邻的点的距离，并且要保证该点没有被访问过
            if (!vis[j] && dist[MinIndex] + mapp[MinIndex][j] < dist[j]) {
                dist[j] = dist[MinIndex] + mapp[MinIndex][j];
                ori[j] = MinIndex;
            }
        }
    }
}
```