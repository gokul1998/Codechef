#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long r,n,k,i;
		cin>>n>>k;
		long long a[n];
		for(i=0;i<n;i++)cin>>a[i];
		long long ans=0;
		for(i=0;i<n;i++){
			r=a[i]%k;
			if(a[i]>=k)ans=ans+min(r,k-r);
			else ans=ans+(k-a[i]);
		}
		cout<<ans<<endl;
	}
}
