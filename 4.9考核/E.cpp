#include<bits/stdc++.h>
using namespace std;
int t, n;
int a[105], temp;
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		int ans = 0;
		bool flag0 = false, flagsim = false;
		for (int i = 1; i <= n; i++) {
			cin >> temp;
			a[temp]++;
			if (a[temp] > 1) {
				flagsim = true;
			}
			if (temp == 0) {
				flag0 = true;
			}
		}
		if (flag0) {
			ans = n - a[0];
		} else if (flagsim) {
			ans = n;
		} else {
			ans = n + 1;
		}
		cout << ans << endl;
		memset(a,0,sizeof(a));
	}
	return 0;
}
