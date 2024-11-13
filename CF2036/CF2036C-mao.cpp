#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

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
            while (n--) {
                int a, b;
                cin >> a >> b;
                ori.replace(a - 1, 1, to_string(b));
                int fvk = stoi(ori, nullptr, 2);
                cout << ori << endl;
                cout << fvk << endl;
                if ((fvk / 12) > (fvk % 12)) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-2.
//
