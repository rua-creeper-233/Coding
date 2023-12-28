#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 2e5 + 7;
int fa[N];

int Find(int x) {
    return fa[x] == x ? x : fa[x] = Find(fa[x]);
}

void Merge(int x, int y) {
    int a = Find(x), b = Find(y);
    fa[a] = b;
}

void init(int n) {
    for (int i = 1; i <= n; ++i)fa[i] = i;
}

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--) {
        int n;
        int ss = 0;
        cin >> n;
        vector<int> ne(n + 1);
        init(n);
        for (int i = 1; i <= n; ++i) {
            cin >> ne[i];
            if (ne[i] == i)continue;
            if (Find(i) != Find(ne[i]))Merge(i, ne[i]);
            else {
                if (ne[ne[i]] == i)continue;
                else ss++;
            }
        }
        int ans = 0;
        map<int, int> mp;
        for (int i = 1; i <= n; ++i)
            if (!mp[Find(i)]) {
                mp[Find(i)]++;
                ans++;
            }
        int mmax = ans;
        int mmin = min(ans, ss + 1);
        cout << mmin << ' ' << mmax << '\n';
    }
    return 0;
}