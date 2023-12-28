#include<bits/stdc++.h>

using namespace std;
int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int maxx = -1;
        for (int i = 0; i < s.length(); i++) {
            char star = s[i];
            int now = i;
            if (s.find_first_of(star, i + 1) == string::npos) {
                continue;
            } else {
                Next:;
                bool flag = true;
                int en = s.find_first_of(star, now + 1);
                if (en == i) {
                    break;
                }
                for (int j = i; j <= en; j++) {
                    for (int k = en; k >= i; k--) {
                        if (s[j] != s[k]) {
                            flag = false;
                            break;
                        }
                    }
                }
                if (flag) {
                    maxx = max(maxx, en - i);
                    now = en;
                    goto Next;
                } else {
                    continue;
                }
            }
        }
        cout << maxx << endl;
    }
    return 0;
}