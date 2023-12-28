#include<bits/stdc++.h>

using namespace std;
int t;

void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, s = 0;
        int minn = 1e9 + 5;
        cin >> n;
        vector<int> a(n);
        for (int &k: a)cin >> k;
        for (int i = n - 1; i >= 0; --i) {
            if (a[i] <= minn) {
                if (s != 0) {
                    cout << "-1" << endl;
                    goto Next;
                }
                minn = a[i];
            } else {
                s++;
            }
        }
        cout << s << endl;
        Next:;
    }
    return 0;
}