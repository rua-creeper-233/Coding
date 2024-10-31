#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int now = -1;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] - '0' != now) {
            now = s[i] - '0';
            if (now == 1) {
                ans++;
            }
        }
    }
    if(ans==0){
        cout<<0;
        return 0;
    }
    cout<<ans-1;
    return 0;
}
//
// Created by Invalid_index on 24-5-8.
//
