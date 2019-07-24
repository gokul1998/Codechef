#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,j;
		cin>>n;
		long long diff,a[n],b[n],c[n];
		for(i=0;i<n;i++)cin>>a[i];
		long long maxi=-1,mini=INT_MAX,res=-1;
		for(i=0;i<n;i++){
			res=max(res,a[i]-mini);
			mini=min(mini,a[i]);
		}
		if(res>0)cout<<res<<endl;
		else cout<<"UNFIT"<<endl;
	}
}
