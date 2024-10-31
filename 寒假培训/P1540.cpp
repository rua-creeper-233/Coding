#include<bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int ans = 0;
    vector<int> a(m + 1);
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        if (temp == 0) {
            temp = -1;
        }
        if (find(a.begin(), a.end(), temp) == a.end()) {
            a.push_back(temp);
            ++ans;
        }
        if (a.size() > m) {
            a.erase(a.begin());
        }
    }
    cout << ans;
    return 0;
}
//
// Created by Invalid_index on 2024/2/6.
//
