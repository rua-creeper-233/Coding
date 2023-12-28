#include<bits/stdc++.h>
using namespace std;
int m, n;
char temp;
int mapp[105][105];
deque<int> f;
int disx[] = {0, -1, 1, 0, 0};
int disy[] = {0, 0, 0, 1, -1};
bool check(int x, int y) {
	if (x <= 0 || x >= m || y <= 0 || y >= n || mapp[x][y] == -1) return false;
	else return true;
}
int bfs(int x, int y, int step) {
	if (!check(x, y)) return 0;
	for (int i = 1; i <= 4; i++) {
		if (mapp[x + disx[i]][y + disy[i]]) {
			step++;
			f.push_back((x + disx[i]) * 10 + (x + disy[i]));
		}
	}
}
int main() {
	while (1) {
		int targ = 0;
		cin >> m >> n;
		if (m == 0 || n == 0) {
			break;
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> temp;

				if (temp == '*') {
					mapp[i][j] = 0;
				} else {
					mapp[i][j] = 1;
					f.push_back(i * 10 + j);
					targ++;
				}
			}
		}
		for (int i = 1; i <= targ; i++) {
			mapp[f.front() / 10][ f.front() % 10] = bfs(f.front() / 10, f.front() % 10, 1);
			f.pop_front();
		}
	}
}
