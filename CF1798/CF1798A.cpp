#include<iostream>

using namespace std;
typedef long long ll;
typedef long double ld;

const int N = 110;
int a[N], b[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int x = a[n - 1], y = b[n - 1];
    int flag = 1;
    for (int i = 0; i < n - 1; i++) {
        if ((x < a[i] && x < b[i]) || (y < b[i] && y < a[i]) || (x < a[i] && y < a[i]) || (x < b[i] && y < b[i]))
            flag = 0;
    }

    flag ? cout << "Yes" << endl : cout << "No" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}