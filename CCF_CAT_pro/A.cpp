#include<bits/stdc++.h>

using namespace std;
int n, k;
int maxt[100005];
long long ans;
struct flow {
    int time, value;
} er[100005];

bool cmp(flow a, flow b) {
    return a.value > b.value;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> er[i].time;
    }
    for (int i = 1; i <= n; i++) {
        cin >> er[i].value;
    }
    sort(er + 1, er + 1 + n, cmp);
    for (int i = 1; i <= k; i++) {
        ans += er[i].value;
    }
    cout << ans;
    return 0;
}