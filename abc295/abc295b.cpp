#include<bits/stdc++.h>
using namespace std;
char ma[25][25];
int xma, yma;
deque<int> bomb;
bool check(int x, int y) {
	if (x > xma || y > yma || x <= 0 || y <= 0) {
		return false;
	}
	return true;
}
void mad(int x, int y, int ds) {
	for (int i = x - ds; i <= x + ds; i++) {
		for (int j = y - ds; j <= y + ds; j++) {
			if (check(i, y)) {
				if ((abs(i - x) + abs(j - y)) <= ds) {
					ma[i][j] = '.';
				}
			} else {
				continue;
			}
		}
	}
	return ;
}
int main() {
	cin >> xma >> yma;
	for (int i = 1; i <= xma; i++) {
		for (int j = 1; j <= yma; j++) {
			cin >> ma[i][j];
			if (ma[i][j] > '0' && ma[i][j] <= '9') {
				bomb.push_back(i * 100 + j * 10 + (ma[i][j] - '0'));
			}
		}
	}
	while (!bomb.empty()) {
		int temp = bomb.front();
		bomb.pop_front();
		int tempx = temp / 100;
		int tempy = (temp / 10) % 10 ;
		int tempds = temp % 10;
		mad(tempx, tempy, tempds);
	}
	for (int i = 1; i <= xma; i++) {
		for (int j = 1; j <= yma; j++) {
			cout << ma[i][j];
		}
		cout << endl;
	}
}
