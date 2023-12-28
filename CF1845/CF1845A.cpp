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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1) {
            if (k != 1) {
                cout << "YES" << endl;
                while (n--) {
                    cout << 1 << " ";
                }
            }else{
                cout<<"NO";
            }
        } else {

        }
        cout << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/6/29.
//
