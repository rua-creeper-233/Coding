#include<bits/stdc++.h>

using namespace std;
int s[1000005];

int main() {
    int n;
    cin >> n;
    int maxx = -1;
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        maxx = max(maxx, temp);
        s[temp]++;
    }
    for (int i = 1; i <= maxx; i++) {
        if (s[i] % 2) {
            cout << i;
            return 0;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/12/2.
//
