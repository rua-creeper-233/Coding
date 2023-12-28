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
        string num;
        cin >> num;
        num = "0" + num;
        int len = num.length();
        int change = 5 + 2e5;
        for (int i = len - 1; i > 0; i--) {
            if (num[i] >= '5' && num[i - 1] != '9') {
                change = i;
                num[i - 1] += 1;
            } else if (num[i] >= '5' && num[i - 1] == 9) {
                change = i - 1;
                num[i - 2] += 1;
                num[i - 1] = 0;
            }
        }
        if (change == 5 + 2e5) {
            for (int i = 1; i < len; i++) {
                cout << num[i];
            }
        } else {
            for (int i = 0; i < change; i++) {
                if (i == 0 && num[0] == '0') {
                    continue;
                } else {
                    cout << num[i];
                }
            }
            for (int i = change; i < len; i++) {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}