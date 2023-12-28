#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int t;
int main(){
	cin>>t;
	while(t--){
		ull n,k;
		cin>>n>>k;
		if(n%2==0){
			cout<<"YES"<<endl;
		}else if(k%2!=0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
