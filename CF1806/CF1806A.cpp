#include<bits/stdc++.h>
using namespace std;
int n, sx, sy, ex, ey;
int step;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> sx >> sy >> ex >> ey;
		step += ey - sy;
		sx += step;
		if (sx < ex || ey < sy) {
			step = -1;
		} else {
			step += sx - ex;
		}
		cout << step << endl;
		step = 0;
	}
	return 0;
}
