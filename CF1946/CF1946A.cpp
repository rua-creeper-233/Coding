#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

int upp(int n, int m) {
    return n % m == 0 ? n / m : n / m + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int midd = upp(n, 2) - 1;
        int mid = a[midd];
        int ans = 0;
        for (int i = midd; i < n; i++) {
            if (a[i] == mid) {
                ans++;
            } else {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
