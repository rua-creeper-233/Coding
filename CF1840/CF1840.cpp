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
        string s;
        cin >> n >> s;
        char flag = s[0];
        for (int i = 1; i < n; i++) {
            if (flag == s[i]) {
                cout << flag;
                flag = s[i + 1];
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}