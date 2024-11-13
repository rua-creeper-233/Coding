#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin >> _;
    while (_--) {
        string s;
        cin >> s;
        int n;
        int len = s.length();
        cin >> n;
        set<int> t;
        if (len < 4) {
            while (n--) {
                int a, b;
                cin >> a >> b;
                cout << "NO" << endl;
            }
            continue;
        }
        int pos = 0;
        while (s.find("1100", pos) != string::npos) {
            pos = s.find("1100", pos);
            t.insert(pos);
            pos++;
        }
        while (n--) {
            int a, b;
            cin >> a >> b;
            for (int i = max(0, a - 4); i < a; i++) {
                if (i + 3 >= len) continue;
                if (s.substr(i, 4) == "1100") {
                    t.erase(i);
                }
            }
            s.replace(a - 1, 1, to_string(b));
            for (int i = max(0, a - 4); i < a; i++) {
                if (i + 3 >= len) continue;
                if (s.substr(i, 4) == "1100") {
                    t.insert(i);
                }
            }
            if (!t.empty()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-2.
//
