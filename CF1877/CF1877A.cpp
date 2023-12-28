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
        int ans = 0;
        cin >> n;
        n--;
        while (n--) {
            int temp;
            cin >> temp;
            ans += temp;
        }
        ans *= -1;
        cout << ans << endl;
    }
    return 0;
}