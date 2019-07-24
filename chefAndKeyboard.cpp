#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long y,n,m,c,i,ans=0;
		cin>>n>>m>>c;
		for(i=1;i<=n;i++){
			if(c%i==0 && c/i<=m)ans++;
		}
		cout<<ans<<endl;		
	}
}
