#include<bits/stdc++.h>

using namespace std;
int t;
#define ll long long

int main() {
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll s[(int) 2e5 + 6];
        for (int i = 1; i <= n; i++) {
            cin >> s[i];
        }
        sort(s + 1, s + 1 + n);
        cout << max(s[1] * s[2], s[n ] * s[n - 1]) << endl;
        memset(s, 0, sizeof(s));
    }
    return 0;
}