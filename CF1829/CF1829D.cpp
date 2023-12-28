#include<bits/stdc++.h>

#define ull unsigned long long
using namespace std;
int t;

int main() {
    cin >> t;
    while (t--) {
        ull a, b;
        cin >> a >> b;
        long long c = a - b;
        bool flag = false;
        if (c >= 2 * b) {
            flag = true;
        }
        if (c >= b / 2) {
            flag = true;
        }
        if(c==4*b){
            flag=false;
        }
        if(c==b){
            flag=false;
        }
        if(c<0){
            flag=false;
        }
        if(c<2*b&&c>b/2&&(c-b/2)>b){
            flag=false;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/6.
//
