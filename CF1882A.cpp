#include<bits/stdc++.h>

using namespace std;
int t;

int main() {
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp = 0, ans = 0;
        for (int i = 1; i <= n; i++) {
            ans++;
            cin >> temp;
            if (ans == temp) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}