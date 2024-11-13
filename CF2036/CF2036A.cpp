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
        int flag = 1;
        int temp;
        cin >> n;
        cin >> temp;
        n--;
        while (n--) {
            int temp2;
            cin >> temp2;
            int abss = abs(temp - temp2);
            temp = temp2;
            if (abss == 5 || abss == 7) {
                continue;
            } else {
                flag = 0;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 24-11-2.
//
