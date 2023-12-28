#include<bits/stdc++.h>
using namespace std;
int t,n,temp;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int flag=0;
		for(int i=1;i<=n;i++){
			cin>>temp;
			if(temp<=i){
				flag=1;
			}
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
