#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull t, m, n, ans;
int card[(int)3e5 + 5];
int main() {
	std::ios::sync_with_stdio(0);std::cin.tie(0); 
	cin >> t;
	while (t--) {
		cin >> m >> n;
		for (int i = 1; i <= (int)m * n; i++) {
			cin >> card[i];
		}
		for (int i = 1; i <= m; i++) {
			for (int j = i + 1; j <= m; j++) {
				for (int k = 1; k <= n; k++) {
					ans += abs(card[(i - 1) * n + k] - card[k + (j-1) * n]);
				}
			}
		}
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}
