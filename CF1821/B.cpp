#include<bits/stdc++.h>
using namespace std;
int t;
const int N = 100010;
int a[N], dp[N], len[N], pre[N], st[N];

int LIS(int n) {
	fill(dp, dp + n, INT_MAX);
	for (int i = 0; i < n; i++) {
		int j = lower_bound(dp, dp + n, a[i]) - dp;
		dp[j] = a[i];
		len[i] = j + 1;
		if (j) pre[i] = st[j - 1];
		st[j] = i;
	}
	int L = max_element(len, len + n) - len;
	int R = L;
	for (int i = L - 1; i >= 0; i--)
		if (a[i] < a[L] && len[i] == len[L] - 1)
			R = i;
	cout << R + 1 << " " << L + 1 << endl;
	return len[L];
}
int main() {
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int temp;
		for (int i = 0; i < n; i++) cin >> temp;
		for (int i = 0; i < n; i++) cin >> a[i];
		LIS(n);
		memset(a, 0, sizeof(a));
		memset(dp, 0, sizeof(dp));
		memset(len, 0, sizeof(len));
		memset(pre, 0, sizeof(pre));
		memset(st, 0, sizeof(st));
	}
	return 0;
}
