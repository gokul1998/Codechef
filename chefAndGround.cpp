#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,m,maxi=-1,req=0;
		cin>>n>>m;
		int a[n];
		for(i=0;i<n;i++){
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]!=maxi)req+=(maxi-a[i]);
	}
	req=m-req;
	if(req%n==0)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	}
}
