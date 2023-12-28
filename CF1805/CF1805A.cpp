#include <bits/stdc++.h>
#define N 1010
using namespace std;
typedef long long LL;
int t, n;
int a[N], cnt[30];
bool vis[256];

int main()
{
    std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(cnt, 0, sizeof(cnt));
        memset(vis, 0, sizeof(vis));
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 8; j++)
            {
                if ((a[i] >> j) & 1) cnt[j]++;
            }
        }
        for (int x = 0; x < 256; x++)
        {
            bool ok = true;
            for (int i = 1; i <= n; i++)
            {
                if (!vis[a[i] ^ x]) vis[a[i] ^ x] = true;
                else
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                int tmp = 0;
                for (int j = 0; j < 8; j++)
                {
                    if ((x >> j) & 1) tmp += min(cnt[j], n - cnt[j]);
                    else tmp += cnt[j];
                }
                if (tmp == n) 
                {
                    ans = x;
                    break;
                }
            }
            memset(vis, 0, sizeof(vis));
        }
        cout << ans << endl;
    }
    return 0;
}
