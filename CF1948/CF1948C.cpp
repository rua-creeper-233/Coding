#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;
const int maxn = 2e5 + 5;

int mapp[3][maxn + 1];
int book[3][maxn + 1];

int check(int n, int m) {
    if (n < 1 || n > 2 || mapp[n][m]) {
        return 0;
    }
    return 1;
}


void dfs(int x, int y, int destination) {
    if (!check(x, y)) {
        return;
    }
    mapp[x][y] = 2;
    dfs(x + 1, y, destination);
    dfs(x - 1, y, destination);
    dfs(x, y + book[x][y], destination);
    return;
}

int main() {
    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    std::priority_queue<int>0 abb;
    cin >> t;
    while (t--) {
        int destination;
        cin >> destination;
        memset(mapp, 0, sizeof(mapp));
        memset(book, 0, sizeof(book));
        for (int i = 1; i <= 2; i++) {
            for (int j = 1; j <= destination; j++) {
                char temp;
                cin >> temp;
                if (temp == '>') {
                    book[i][j] = 1;
                } else if (temp == '<') {
                    book[i][j] = -1;
                }
            }
        }
        for (int i = 1; i <= 2; i++) {
            for (int j = 1; j <= destination; j++) {
                cout << book[i][j] << " ";
            }
            cout << endl;
        }
        dfs(1, 1, destination);
        cout<<"mapp"<<endl;
        for (int i = 1; i <= 2; i++) {
            for (int j = 1; j <= destination; j++) {
                cout << mapp[i][j] << " ";
            }
            cout << endl;
        }
        if (mapp[2][destination]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 24-4-12.
//
