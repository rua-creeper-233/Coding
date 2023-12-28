#include<bits/stdc++.h>

using namespace std;
int t;

int main() {
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int b01 = 0;
        int b10 = 0;
        int b11 = 0;
        int t[3];
        memset(t, 1, sizeof(t));
        for (int i = 1; i <= n; i++) {
            int tempt, tempb;
            cin >> tempt >> tempb;
            if (tempb) {
                if (tempb == 1) {
                    b01 = 1;
                    t[0] = min(t[0], tempt);
                }
                if (tempb == 10) {
                    b10 = 1;
                    t[1] = min(t[1], tempt);
                }
                if (tempb == 11) {
                    b11 = 1;
                    t[2] = min(t[2], tempt);
                }
            }
        }
        if ((b01 && b10) || b11) {
            cout << min(t[0] + t[1], t[2]) << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}