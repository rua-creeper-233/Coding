#include<bits/stdc++.h>

using namespace std;
int t;
int numb[(int) 2e5 + 5];
int tag[(int) 2e5 + 5];

void change(int step, int loc) {
    while (step--) {
        int noob = numb[loc];
        int temp = 0;
        while (noob) {
            temp += noob % 10;
            noob /= 10;
        }
        numb[loc] = temp;
    }
    return;
}

struct SegementTree {
    int l, r;
    int tag = 0;
};
SegementTree t[800005];

void build(int l, int r, int p) {
    if (l == r) {

        return;
    }
    int mid = (l + r) >> 1;
    build(l, mid, p << 1);
    build(mid + 1, r, p << 1 | 1);
    return;
}

int main() {
    cin >> t;
    while (t--) {
        int n, func;
        cin >> n >> func;
        memset(numb, 0, sizeof(numb));
        memset(tag, 0, sizeof(tag));
        for (int i = 1; i <= n; i++) {
            cin >> numb[i];
        }

        build(1, n, 1);
        while (func--) {
            int flag;
            cin >> flag;
            if (flag == 1) {
                int l, r;
                cin >> l >> r;
                for (int i = l; i <= r; i++) {
                    tag[i]++;
                }
            }
            if (flag == 2) {
                int loc;
                cin >> loc;
                change(tag[loc], loc);
                tag[loc] = 0;
                cout << numb[loc] << endl;
            }
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2024/2/17.
//
