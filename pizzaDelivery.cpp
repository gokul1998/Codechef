#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		int n,i,j,maxi=-1;
		cin>>n;
		int h[600],k[600];
		for(i=0;i<n;i++){
		cin>>h[i];
		maxi=max(maxi,h[i]);
	}
		int col=(2*maxi)+1;
		for(i=1;i<=n;i++)cin>>k[i];
		int dp[600][1200],ans=0;
		memset(dp,-1,sizeof(dp));
		//sort(k,k+n);
		for(j=0;j<=n;j++)dp[j][0]=0;
		for(i=1;i<=col;i++)dp[0][i]=INT_MAX;
		for(i=1;i<=n;i++){
			for(j=1;j<=col;j++){
					if(k[i]>j)dp[i][j]=dp[i-1][j];
					else{
						dp[i][j]=min(dp[i-1][j],dp[i][j-k[i]]+1);
				}
		/*for(i=0;i<n;i++){
			for(j=0;j<col;j++)cout<<dp[i][j]<<" ";
			cout<<endl;
		}*/
	}
}
		for(i=0;i<n;i++)ans+=dp[n][h[i]*2];
		cout<<ans<<endl;
	}

}

