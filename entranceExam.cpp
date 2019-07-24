#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long i,n,k,e,m,j,sum=0,x,curr=0;
		cin>>n>>k>>e>>m;
		long long a[n-1];
		for(i=0;i<n-1;i++){
			for(j=0;j<e;j++){
				cin>>x;
				sum+=x;
			}
			a[i]=sum;
			sum=0;
		}
		for(i=0;i<e-1;i++){
		cin>>x;
		curr+=x;
	}
		sort(a,a+n-1);
		//for(i=0;i<n-1;i++)cout<<a[i]<<" ";
		//cout<<endl;
		long long target=a[n-k-1],zero=0;;
		long long ans=max(0LL,target-curr+1);
		if(ans>m)cout<<"Impossible"<<endl;
		else cout<<ans<<endl;
}
return 0;
}
