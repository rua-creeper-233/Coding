#include<bits/stdc++.h>
using namespace std;
long long n, a, temp;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		int coun = 0, coune = 0;
		for (int j = 1; j <= a; j++) {
			cin >> temp;
			if (temp == 0) coun++;
			if (temp > 1) coune++;
		}
		if (coun <= (a + 1) / 2) {
			cout << "0" << endl;
		} 	else if (coun == 0 || coune > 0) {
			cout << "1" << endl;
		} else {
			cout << "2" << endl;
		}
	}
	return 0;
}
