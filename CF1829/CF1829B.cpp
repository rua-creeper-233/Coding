#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n,maxx=-1,temp;
        cin>>n;
        int current0=0;
        while(n--){
            cin>>temp;
            if(temp==0){
                current0++;
            }
            if(temp==1){
                current0=0;
            }
            maxx=max(current0,maxx);
        }
        cout<<maxx<<endl;
    }
    return 0;
}
//
// Created by Invalid_index on 2023/5/6.
//
