#include<bits/stdc++.h>

using namespace std;
#define ll long long
unsigned long long fib(int a) {
    long long k[a+1];
    k[0]=1;
    k[1]=2;
    for(int i=2; i<=a;i++)
    {
        k[i]=k[i-2]%(ll)(1e9 + 7)+k[i-1]% (ll)(1e9 + 7);
    }

    return k[a];
}

int main() {
    int n;
    cin >> n;
    long long ans = fib(n);
    ans = (ans % (ll)(1e9 + 7) * ans % (ll)(1e9 + 7)) % (ll)(1e9 + 7);
    cout << ans << '\n';
    return 0;
}