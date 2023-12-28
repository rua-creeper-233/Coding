#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int card[300005];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, m, n;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		for (int i = 0; i < m * n; i++)
			cin >> card[i];
		ull ans = 0;
		for (int k = 0; k < n; k++) {
			vector<int> col;
			for (int i = 0; i < m; i++)
				col.push_back(card[i * n + k]);
			sort(col.begin(), col.end());
			for (int i = 1; i < m; i++)
				ans += abs(col[i] - col[i - 1]) * (i) * (m - i);
		}
		cout << ans << "\n";
	}
	return 0;
}
