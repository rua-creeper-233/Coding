#include<bits/stdc++.h>

using namespace std;
int t;

int main() {
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int all = n << 1;
        int cnt1 = 0, cnt2 = 0;
        while (all--) {
            int temp;
            cin >> temp;
            if (temp) {
                cnt1++;
            } else {
                cnt2++;
            }
        }
        int a1 = cnt1 % 2;
        int a2 = min(cnt1, cnt2);
        cout << a1 << " " << a2 << endl;
    }
    return 0;
}
