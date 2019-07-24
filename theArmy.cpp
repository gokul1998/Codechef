#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long j,n,m,i,pos,mini=INT_MAX,maxi=-mini;
		cin>>n>>m;
		for(i=0;i<m;i++){
			cin>>pos;
			maxi=max(maxi,pos);
			mini=min(mini,pos);
		}
		for(i=0;i<n;i++){
			cout<<max(abs(i-mini),abs(i-maxi))<<" ";
		}
		cout<<endl;
	}
}
