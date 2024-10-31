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
        int number;
        cin >> number;
        int ans = 0;
        if (number >= 15) {
            int temp = number % 15;
            ans = (number - (temp)) / 15;
            number = temp;
            cout << ans << "   ";
        }
        if (number >= 10) {
            int temp = number % 10;
            ans += (number - (temp)) / 10;
            number = temp;
        }
        if (number >= 6) {
            int temp = number % 6;
            ans += (number - (temp)) / 6;
            number = temp;
            cout << ans << "   ";
        }
        if (number >= 3) {
            int temp = number % 3;
            ans += (number - (temp)) / 3;
            number = temp;
            cout << ans << "    ";
        }
        ans += number;
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2024/3/1.
//
