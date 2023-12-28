#include<bits/stdc++.h>
using namespace std;
long long n, t, a, cou, coue, temp;
int main() {
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		for (int j = 1; j <= n; j++) {
			cin >> temp;
			if (temp == 0) {
				cou++;
			}
			if (temp == 1) {
				coue++;
			}
		}
		if ((n - cou) >= n / 2) {
			cout << "0" << endl;
		} else {
			if (cou == n) {
				cout << "1" << endl;
			} else if (cou + coue == n) {
				cout << "2" << endl;
			} else {
				cout << "1" << endl;
			}
		}
		cou = 0;
		coue = 0;
	}
	return 0;
}
