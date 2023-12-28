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
        int n;
        cin >> n;
        int cnt = 0, mcnt = 0;
        int temp;
        while (n--) {
            cin >> temp;
            if (temp == 1) cnt++;
            else mcnt++;
        }
        int ans = 0;
        if (mcnt % 2) {
            ans++;
            mcnt--;
            cnt++;
        }
        while (mcnt > cnt) {
            ans += 2;
            mcnt -= 2;
            cnt += 2;
        }
        cout << ans << endl;
    }
    return 0;
}