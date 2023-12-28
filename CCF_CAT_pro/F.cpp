#include<bits/stdc++.h>

using namespace std;
struct card {
    int num, value;
} tic[105];

bool cmp(card a, card b) {
    return a.num < b.num;
}

int gcdd(int a, int b) {
    return b == 0 ? a : gcdd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> tic[i].num;
    }
    for (int i = 1; i <= n; i++) {
        cin >> tic[i].value;
    }
    sort(tic + 1, tic + 1 + n, cmp);
    int start = 1;
    int minn = 1 << 30;
    if (tic[1].num == 1) {
        start = 2;
        minn = tic[1].value;
    }
    for (int i = start; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (gcdd(tic[i].num, tic[j].num) == 1) {
                minn = min(tic[i].value + tic[j].value, minn);
            }
        }
    }
    if (minn == 1 << 30) {
        minn = -1;
    }
    cout << minn;
    return 0;
}
