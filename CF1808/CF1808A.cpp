#include<bits/stdc++.h>
using namespace std;
int t, l, r;
#define ull unsigned long long
int num[(int)1e6 + 5];
int maxmin(ull n) {
	int maxx = -1, minn = 10;
	if (n < 10) {
		return 0;
	}
	if (n == 10) {
		return 1;
	}
	while (n) {
		int temp = n % 10;
		maxx = max(temp, maxx);
		minn = min(temp, minn);
		n /= 10;
	}
	return maxx - minn;
}
int main() {
	cin >> t;
	while (t--) {
		cin >> l >> r;
		int maxxx = -1;
		if (abs(r - l) >= 100) {
			for (int i = r; i >= r - 100; i--) {
				if (!num[i]) {
					num[i] = maxmin(i);
				}
				maxxx = max(num[i], maxxx);
			}
			for (int i = r; i >= r - 100; i--) {
				if (num[i] == maxxx) {
					cout << i << endl;
					break;
				}
			}
		} else {
			for (int i = l; i <= r; i++) {
				if (!num[i]) {
					num[i] = maxmin(i);
				}
				maxxx = max(num[i], maxxx);
			}
			for (int i = r; i >= l; i--) {
				if (num[i] == maxxx) {
					cout << i << endl;
					break;
				}
			}
		}
	}
	return 0;
}
