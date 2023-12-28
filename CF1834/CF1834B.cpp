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
        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;
        bool flag2 = 0;
        int lens1 = s1.length(), lens2 = s2.length();
        int n = lens2 - lens1;
        string temp = "0";
        s2 = temp + s2;
        for (int i = 1; i <= lens2 - lens1 + 1; i++) {
            s1 = temp + s1;
        }
        if(lens1-lens2>=2){
            if()
        }
        cout << ans << endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/6/18.
//
