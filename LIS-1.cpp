#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,i,j,res=0,c=0;
	cin>>n;
	ll a[n],visited[100001],dp[n]={0};
	memset(visited,-1,sizeof(visited));
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]-1>=0 && visited[a[i]-1]>=0){
			dp[i]=dp[visited[a[i]-1]]+1;
			visited[a[i]]=i;
		}
		else if(a[i]-1>=0 && visited[a[i]-1]==-1){
			visited[a[i]]=i;
			dp[visited[a[i]]]=1;
		}
	}
	for(i=0;i<n;i++)res=max(res,dp[i]);
	cout<<res<<endl;
}
