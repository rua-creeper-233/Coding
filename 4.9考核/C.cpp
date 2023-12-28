#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int t;
int main() {
	cin >> t;
	while (t--) {
		ull n, ans = 1;
		cin >> n;
		if (n % 2) {
			cout << "0" << endl;
			continue;
		}
		for (int i = 2; i <= n / 2; i++) {
			ans *= i * i;
			ans %= 998244353;
		}
		cout << ans << endl;
	}
}
