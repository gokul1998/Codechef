#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long flag=0,n,f,i,ind=0,start=-1,j;
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++)cin>>a[i];
		cin>>f;
		long long b[f],c[f]={0};
		for(i=0;i<f;i++)cin>>b[i];
		for(i=0;i<f;i++){
			for(j=0;j<n;j++){
				if(b[i]==a[j])c[i]=1;
			}
		}
		for(i=0;i<f;i++){
			if(c[i]==0){
				flag=1;
				break;
			}
		}
		if(flag==0)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
