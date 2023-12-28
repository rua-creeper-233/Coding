#include <bits/stdc++.h>

using namespace std;
int q;

int main() {
    cin >> q;
    while (q--) {
        int n, t;
        cin >> n >> t;
        int time[n], val[n];
        for (int i = 0; i < n; i++) {
            cin >> time[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> val[i];
        }
        int temp = t;
        int ans = -1;
        int tr = 0;
        for (int i = 0; i < n; i++) {
            if (val[i] > tr && temp >= time[i]) {
                tr = val[i];
                ans = i + 1;
            }
            temp--;
        }
        cout << ans << endl;
    }
    return 0;
}