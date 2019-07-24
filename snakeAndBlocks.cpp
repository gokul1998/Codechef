#include<bits/stdc++.h>
using namespace std;
int minimum(int a,int b,int c){
	if(a<=b && a<=c)return a;
	else if(b<=c && b<=a)return b;
	else return c;
}
int main(){
	int n,m,mini=INT_MAX;
	cin>>n>>m;
	int a[n][m],i,j;
	int dp[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		{
		cin>>a[i][j];
		dp[i][j]=0;
	}
	}
	/*cout<<"nexxxx"<<endl;        1 2 3
	 							   4 5 6
	 							   7 8 9
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	for(j=0;j<m;j++){
	dp[n-1][j]=a[n-1][j];
	//cout<<"hello"<<dp[n-1][j]<<endl;
}
	/*for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	//cout<<"next"<<endl;
	for(i=n-2;i>=0;i--){
		for(j=0;j<m;j++){
			if(j-1>=0 && j+1<m)mini=minimum(a[i][j-1],a[i][j],a[i][j+1]);
			else if(j-1>=0)mini=min(a[i][j-1],a[i][j]);
			else mini=min(a[i][j],a[i][j+1]);
			//cout<<"mini = "<<mini<<" dp[i-1][j] = "<<dp[i+1][j]<<endl;
			dp[i][j]=dp[i+1][j]+mini;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	mini=INT_MAX;
	for(i=0;i<m;i++){
		if(mini>dp[0][i])mini=dp[0][i];
	}
	cout<<"minimum blocks = "<<mini;
}
/*wrong program*/
