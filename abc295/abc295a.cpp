#include<bits/stdc++.h>
using namespace std;
int n;
string st, cmp[6] = {"and", "that", "not", "the", "you"};
bool flag;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> st;
		for (int j = 0; j < 6; j++) {
			if (st == cmp[j]) {
				cout << "Yes";
				return 0;
			}
		}
	}
	cout << "No";
	return 0;
}
