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
        int a[n + 5];
        bool change = false;
        cin >> a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] != a[i - 1]) {
                change = true;
            }
        }
        sort(a, a + n, cmp);
        if (!change) {
            cout << "-1" << endl;
        } else {
            int max = a[n - 1];
            int count = 0;
            for (int i = 0; i < n; i++) {
                if(a[i]!=max){
                    count++;
                }
            }
            cout<<count<<" "<<n-count<<endl;
            for(int i=0;i<count;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=count;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/8/12.
//
