#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

bool in_or_not(int pos, int a) {
    if (a - 1 < pos || pos + 4 < a - 1) {
        return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        string ori;
        cin >> ori;
        int len = ori.length();
//        cout << len << endl;
        if (len < 4) {
            int n;
            cin >> n;
            while (n--) {
                int a, b;
                cin >> a >> b;
                cout << "NO" << endl;
            }
        } else {
            int n;
            cin >> n;
            int fi = ori.find("1100");
            while (n--) {
                int a, b;
                cin >> a >> b;
                ori.replace(a - 1, 1, to_string(b));
                cout << ori << endl;
                cout << "At:   " << fi << endl;
                if (fi != string::npos && !in_or_not(fi, a)) {
                    cout << "YES" << endl;
                } else if (in_or_not(fi, a)) {
                    fi = ori.find("1100");
                    if (fi != string::npos) {
                        cout << "YES" << endl;
                    } else {
                        cout << "NO" << endl;
                    }
                } else if (fi == string::npos) {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}//
// Created by Invalid_index on 24-11-2.
//
