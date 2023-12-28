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
        int sumo = 0, sume = 0;
        int temp, n;
        cin >> n;
        while (n--) {
            cin >> temp;
            if (temp % 2 == 0) {
                sumo++;
            } else {
                sume++;
            }
        }
        if (sume % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}