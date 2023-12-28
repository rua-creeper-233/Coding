#include<bits/stdc++.h>
#include <sysinfoapi.h>

using namespace std;
int t;
int s[103];

void solve(int a, int b) {
    bool flag = false;
    for (int i = 0; i <= a; i++) {
        s[i] = 1;
    }
/*    for (int i = 0; i <= a; i++) {
        cout << s[i] << " ";
    }*/
    for (int i = 0; i <= a; i++) {
        int sum1 = 0;
        for (int j = 0; j < a; j++) {
            for (int k = j + 1; k < a; k++) {
                if (s[j] * s[k] == 1) {
                    sum1++;
                }
            }
        }
        if (sum1 == b) {
            flag = true;
            break;
        } else s[i] = -1;
        sum1 = 0;
    }
    if (flag) {
        cout << "YES" << endl;
        for (int i = 0; i < a; i++) {
            cout << s[i] << " ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}

int main() {
    cin >> t;
    while (t--) {
        int num, n;
        cin >> num >> n;
        solve(num, n);
    }
    return 0;
}
//
// Created by Invalid_index on 2023/4/27.
//
