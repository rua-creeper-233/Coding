#include <bits/stdc++.h>
using namespace std;
int t, n;
char temp, maxx = 'z';
string s;
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		int pos = -1;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			maxx = min(temp, maxx);
			if (temp == maxx) {
				pos = i;
			}
			s += temp;
		}
		string ans = maxx + s.substr(0, pos) + s.substr(pos + 1, n);
		s = "";
		maxx = 'z';
		cout << ans << endl;
	}
	return 0;
}
