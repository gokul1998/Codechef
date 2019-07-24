#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k,i,both=0,none=0;
		cin>>n>>m>>k;
		int visited[n+1]={0},ignored[m+1],tracked[k+1];
		for(i=1;i<=m;i++){
		cin>>ignored[i];
		visited[ignored[i]]=1;
	}
		for(i=1;i<=k;i++){
		cin>>tracked[i];
		if(visited[tracked[i]]==1)both++;
	}
		for(i=1;i<=k;i++)visited[tracked[i]]=1;
		for(i=1;i<=n;i++){
			if(visited[i]==0)none++;
		}
		cout<<both<<" "<<none<<endl;
	}
}
