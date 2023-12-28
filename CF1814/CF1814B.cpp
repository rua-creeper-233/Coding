#include<bits/stdc++.h>
using namespace std;
int t, maxstep;
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
int main() {
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		int step = gcd(x, y);
		int minn = min(x, y);
		int maxx = max(x, y);
		int ans = (step - 1) + minn / step;
		if (x == y) {
			ans += minn / step;
			goto Next;
		}
		for (int i = step; i <= maxx; i++) {
			maxstep = min(maxstep, (maxx / i ) + (i - step));
		}
		ans += maxstep;
Next:
		;
		cout << ans << endl;
		maxstep = 1 << 16;
		ans = 0;
	}
	return 0;
}
