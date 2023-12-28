#include<bits/stdc++.h>
using namespace std;
int t, n, temp, maxn;
bool mun[(int)2e5 + 5];
int main() {
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		for (int j = 1; j <= n; j++) {
			cin >> temp;
			maxn = max(maxn, temp);
			mun[temp] = 1;
		}
		for (int j = 0; j <= n; j++) {
			if (mun[j] == 0) {
				cout << j << endl;
				break;
			}
		}
		memset(mun, 0, sizeof(mun));
	}
	return 0;
}
