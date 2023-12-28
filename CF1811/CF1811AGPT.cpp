#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int len, num;
		string s;
		cin >> len >> num >> s;
		if (num == 0 && s.find_first_not_of("0") != string::npos) {
			cout << s << "0" << endl;
			continue;
		}
		size_t pos = s.find_first_of(to_string(num - 1));
		for (int i = num; i >= 1; i--) {
			pos = min(pos, s.find_first_of(to_string(i - 1)));
		}
		if (pos != string::npos) {
			s.insert(pos, to_string(num));
		} else {
			s += to_string(num);
		}
		cout << s << endl;
	}
	return 0;
}
