#include<iostream>
using namespace std;
char a[100][100];
int  m, n, p, c ;
int disx[] = {0, 0, 1, -1};
int disy[] = {0, 1, -1, 0};
void find(char a[][100], int x, int y) {
	a[x][y] = '*';
	for (int i = 1; i <= 3; i++) {
		for (int j = 1;  j <= 3; j++) {
			if (a[x + disx[i]][y + disy[j]] == '@')
				find(a, x + disx[i], y + disy[j]);
		}
	}
}
int main() {
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) {
			break;
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 0;  j < m; j++) {
				if (a[i][j] == '@') {
					find(a, i, j);
					c++;
				}
			}
		}
		cout << c << endl;
		p = 0, c = 0;
	}
}
