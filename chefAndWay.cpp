#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	long long a[n],i;
	for(i=0;i<n;i++)cin>>a[i];
	long long dp[n+1]={0},min=INT_MAX,pro=1,j,ans[n+1]={0};
	dp[0]=log(a[0]);
	ans[0]=a[0];
	for(i=1;i<n;i++){
		min=INT_MAX;
		for(j=i-k;j<i;j++){
			if(j>=0 && dp[j]<min)min=j;
		}
		dp[i]=dp[min]+log(a[i]);
		ans[i]=(ans[min]*a[i])%mod;
	}
	/*for(i=0;i<n;i++)cout<<dp[i]<<" ";
	cout<<endl;*/
	cout<<ans[n-1]%mod;
}
