#include<bits/stdc++.h>
using namespace std;
int t, n, num, len;
string s;
int main() {
	cin >> t;
	while (t--) {
		cin >> len >> num;
		cin >> s;
		if (num == 10) {
			cout << s << "1" << endl;
		} else {
			switch (num) {
				case (0): {
					int it = s.find_first_not_of("0");
					cout << s.substr(0, it + 1) << 0 << s.substr(it + 1, len + 1);
					break;
				}
				case (1): {
					int it = s.find_first_of("0");
					if (s.find_first_of("0") == string::npos) {
						cout << s << "1" << endl;
					} else {
						cout << s.substr(0, it) << 1 << s.substr(it, len + 1);
					}
					break;
				}
				case (2): {
					int it = s.find_first_of("1");
					cout << s.substr(0, it) << 2 << s.substr(it, len + 1);
					break;
				}
				case 3: {
					int it = s.find_first_of("2");
					cout << s.substr(0, it ) << 3 << s.substr(it, len + 1);
					break;
				}
				case 4: {
					int it = s.find_first_of("3");
					cout << s.substr(0, it) << 4 << s.substr(it, len + 1);
					break;
				}
				case 5: {
					int it = s.find_first_of("4");
					cout << s.substr(0, it ) << 5 << s.substr(it, len + 1);
					break;
				}
				case 6: {
					int it = s.find_first_of("5");
					cout << s.substr(0, it ) << 6 << s.substr(it, len + 1);
					break;
				}
				case 7: {
					int it = s.find_first_of("6");
					cout << s.substr(0, it ) << 7 << s.substr(it, len + 1);
					break;
				}
				case 8: {
					int it = s.find_first_of("7");
					cout << s.substr(0, it) << 8 << s.substr(it, len + 1);
					break;
				}
				case 9: {
					cout << "9" << s;
					break;
				}
			}
			cout << endl;
			s = "";
		}
	}
	return 0;
}
