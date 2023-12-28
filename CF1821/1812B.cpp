#include<bits/stdc++.h>
using namespace std;
int a[(int)2e5 + 5], b[(int)2e5 + 5];
int t, n;
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		int st, en;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> b[i];
		}
		for (int i = 1; i <= n; i++) {
			if (a[i] != b[i]) {
				st = i;
				break;
			}
		}
		for (int i = n; i >= 1; i--) {
			if (a[i] != b[i]) {
				en = i;
				break;
			}
		}
		int tempst = st;
		for (int i = tempst; i > 1; i--) {
			if (b[i - 1] > b[i]) {
				break;
			}
			st--;
		}
		int tempen = en;
		for (int j = tempen; j < n; j++) {
			if (b[j + 1] < b[j]) {
				break;
			}
			en++;
		}
		cout<<st<<" "<<en<<endl;
	}
	return 0;
}
