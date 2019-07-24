#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long j,n,m,i;
		cin>>n>>m;
		long long a[n],b[n+1][m+1];
		memset(b,0,sizeof(b));
		for(i=0;i<n;i++)cin>>a[i];
		b[0][0]=1;
		for(i=1;i<=m;i++)b[0][i]=0;
		for(i=0;i<=n;i++)b[i][0]=1;
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++){
				if(j<a[i-1])b[i][j]=b[i-1][j];
				if(j>=a[i-1]){
					if(b[i-1][j]==1 || b[i-1][j-a[i-1]]==1)b[i][j]=1;
				}
				//else b[i][j]=0;
				//cout<<"i = "<<i<<" j = "<<j<<" b[i][j] = "<<b[i][j]<<endl;
			}
		}
		/*for(i=0;i<=n;i++){
			for(j=0;j<=m;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}*/
		if(b[n][m]==1)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
