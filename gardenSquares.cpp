#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,i,j,k,res=0;
		cin>>n>>m;
		char a[n][m];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)cin>>a[i][j];
		}
		for(i=1;i<n;i++){
			for(j=1;j<m;j++){
				for(k=1;k<=min(i,j);k++){
					if(a[i][j]==a[i-k][j] && a[i][j]==a[i][j-k] && a[i][j]==a[i-k][j-k])res++;
				}
			}
		}
		cout<<res<<endl;
	}
	
}
