#include<bits/stdc++.h>
using namespace std;
const long long MAXN = (int)pow(2, 41);
int t;
long long temp;
stack<int> numb;
int main() {
	cin >> t;
	while (t--) {
		cin >> temp;
		if (temp % 2 == 0 || temp > MAXN) {
			cout << "-1" << endl;
		} else {
			int bit_num = (int)log2((double)temp);
			cout << bit_num << endl;
			temp /= 2;
			for (int i = 1; i <= bit_num; i++) {
				if (temp % 2 == 0) {
					numb.push(1);
				} else {
					numb.push(2);
				}
				temp /= 2 ;
			}
			while (!numb.empty()) {
				cout<<numb.top();
				cout << " ";
				numb.pop();
			}
			cout << endl;
		}
	}
	return 0;
}
