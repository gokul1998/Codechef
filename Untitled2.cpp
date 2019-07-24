#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		long long res=0;
		char a[n][n];
		int up[n][n],right[n][n];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)cin>>a[i][j];
		}
		for(j=n-1;j>=0;j--){
			if(a[n-1][j]=='#'){
				flag=1;
				up[n-1][j]=0;
			}
			else{
			up[n-1][j]=1;
			right[n-1][j]=1;
		}
			if(flag)right[n-1][j]=0;
		}
		for(i=n-2;i>=0;i--){
			for(j=n-1;j>=0;j--){
				if(a[i][j]=='#'){
					up[i][j]=0,right[i][j]=0;
				}
				else{
					if(up[i-1][j]!=0)up[i][j]=1;
					if(j+1<n && right[i][j+1]!=0)right[i][j]=1;
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(up[i][j]==1)res++;
			}
		}
		cout<<res<<endl;
	}
}
