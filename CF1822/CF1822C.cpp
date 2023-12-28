#include<bits/stdc++.h>
using namespace  std;
int t;
unsigned long long ans,n;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        ans=(n+1)*(n+1)+1;
        cout<<ans<<endl;
    }
    return 0;
}