#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,flag=1;;
		cin>>n>>m;
		int a[n+1]={0},i,num;
		for(i=0;i<m;i++){
			cin>>num;
			a[num]=1;
		}
		for(i=1;i<=n;i++){
			if(a[i]==0 && flag==1){
				a[i]=-1;
				flag=0;
			}
			else if(a[i]==0 && flag==0){
				a[i]=-2;
				flag=1;
			}
		}
		for(i=1;i<=n;i++){
			if(a[i]==-1)cout<<i<<" ";
		}
		cout<<endl;
		for(i=1;i<=n;i++){
			if(a[i]==-2)cout<<i<<" ";
		}
		cout<<endl;
	}
}
