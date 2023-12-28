#include<bits/stdc++.h>
using namespace std;
int t, n, m;
int mapp[55][55];
char temp;
int main() {
	cin >> t;
	while (t--) {
		cin >> m >> n;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> temp;
				if (temp == '.') {
					mapp[i][j] = 0;
				}
				if (temp == '*') {
					mapp[i][j] = 1;
				}
				if (temp == 'o') {
					mapp[i][j] = 2;
				}
			}
		}
		for (int k = 0; k <= max(m, n); k++) {
			for (int i = m - 1; i >= 1; i--) {
				for (int j = 1; j <= n; j++) {
					if (mapp[i][j] > mapp[i + 1][j] && mapp[i][j] != 2 && mapp[i + 1][j] != 2) {
						swap(mapp[i][j], mapp[i + 1][j]);
					}
				}
			}
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (mapp[i][j] == 0) cout << ".";
				if (mapp[i][j] == 1) cout << "*";
				if (mapp[i][j] == 2) cout << "o";
			}
			cout << endl;
		}
	}
	return 0;
}
