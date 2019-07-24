#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		string chef,ans;
		long long w[n+1],c=0;
		cin>>chef;
		cin>>ans;
		for(i=0;i<=n;i++)cin>>w[i];
		for(i=0;i<n;i++){
			if(chef[i]==ans[i])c++;
		}
		//cout<<w[c]<<endl;
		long long maxi=-1;
		for(i=0;i<=c;i++){
			if(maxi<w[i])maxi=w[i];
		}
		if(c!=n)cout<<maxi<<endl;
		else cout<<w[n]<<endl;
	}
}
