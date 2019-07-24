#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+2],dp[n+2][n+2],i,j;
		a[0]=0;
		memset(dp,0,sizeof(dp));
		for(i=1;i<=n;i++)cin>>a[i];
		a[n+1]=k;
		dp[0][0]=0,dp[0][n+1]=k,dp[n+1][0]=k;
		for(i=1;i<=n;i++){
		dp[0][i]=a[i];
		dp[i][0]=a[i];
	}
		for(i=1;i<=n+1;i++){
			for(j=1;j<=n+1;j++){
					dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],max(dp[i][j-1],a[i]^a[j])));
					dp[i][j]=max(dp[i][j],max(dp[i-1][j-1]^a[j],dp[i-1][j-1]^a[j]));
			}
		}
		/*for(i=0;i<=n+1;i++){
			for(j=0;j<=n+1;j++)cout<<dp[i][j]<<" ";
			cout<<endl;
		}*/
		cout<<dp[n+1][n+1]<<endl;
	}
}
