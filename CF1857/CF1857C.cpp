#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
int t;

bool cmp(int a, int b) {
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int len = n * (n - 1) / 2;
        int b[len + 3];
        for (int i = 0; i < len; i++) {
            cin >> b[i];
        }
        sort(b,b+len,cmp);
        for(int i=0;i<len;i+=--n){
            cout<<b[i]<<" ";
        }
        cout<<(int)1e9<<endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/8/7.
//
