#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    return a < b;
}

bool cmpp(int a, int b) {
    return a > b;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        while (n--) {
                int  n;
                cin >> n;
                vector<int> a(n);
                int minn = 1e9;
                for(int i =  0;i < n;++i)
                {
                    int minn1 = 1e9,minn2 = 1e9;
                    int m;
                    cin >> m;
                    int t ;
                    for(int j = 0;j < m;++j)
                    {
                        cin >> t;
                        if(t < minn1)
                        {
                            minn2 = minn1;
                            minn1 = t;
                        }else if(t < minn2)
                        {
                            minn2 = t;
                        }
                        minn = min(minn,t);
                    }
                    a[i] = minn2;
                }
                sort(a.begin(),a.end());
                long long ans = 0;
                ans = minn;
                for(int i = 1;i < n;++i)ans += a[i];
                cout << ans << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/8/12.
//
