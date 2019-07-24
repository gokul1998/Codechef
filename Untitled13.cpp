#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,p,k,i,j;
	cin>>n>>k>>p;
	long long num,a[n+1],b[n+1]={0},arr[n+1][n+1];
	map<long long,long long>c;
	memset(arr,0,sizeof(arr));
	for(i=1;i<=n;i++){
		cin>>num;
		b[i]=num;
		a[i]=num;
		//cout<<"num = "<<num<<" ";
	}
	//cout<<endl;
	sort(b,b+(n+1));
	for(i=1;i<=n;i++)c[b[i]]=i;
	//cout<<"brea"<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j)arr[i][j]=1;
			else if(arr[j][i]==1 || abs(b[i]-b[j])<=k){
			arr[i][j]=1;
		//if(arr[j][i]==1)cout<<"first 1 i = "<<i<<" j = "<<j<<endl;
		//else cout<<"first 2 i = "<<i<<" j = "<<j<<endl;	
		}
			else if(j-1>=1 && abs(b[j]-b[j-1])<=k && arr[i][j-1]==1){
			arr[i][j]=1;
		//cout<<"second  i = "<<i<<" j = "<<j<<endl;	
		}
		}
	}
	/*for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)cout<<arr[i][j]<<" ";
		cout<<endl;
	}*/
	while(p--){
		cin>>i>>j;
		long long iind,jind;
		iind=c[a[i]],jind=c[a[j]];
		if(iind>=1 && jind>=1 && iind<=n && jind<=n && arr[iind][jind]==1)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
