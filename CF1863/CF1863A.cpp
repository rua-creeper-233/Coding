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
        int n, a, q;
        cin >> n >> a >> q;
        string number;
        cin >> number;
        if (a >= n) {
            cout << "YES" << endl;
        } else {
            int pnum = 0, mnum = 0;
            int tempn = a;
            for (int i = 0; i < q; i++) {
                if (number[i] == '+') {
                    tempn++;
                    pnum++;
                } else {
                    mnum++;
                    tempn--;
                }
                if (tempn == n) {
                    cout << "YES" << endl;
                    goto Next;
                }
            }
            if (a + pnum >= n) {
                cout << "MAYBE" << endl;
            }
            if (a + pnum < n) {
                cout << "NO" << endl;
            }
            Next:;
        }
    }
    return 0;
}