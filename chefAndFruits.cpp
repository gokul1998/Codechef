#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k,maxi,mini,diff=0;
		cin>>n>>m>>k;
		if(n>=m){
			maxi=n;
			mini=m;
		}
		else{
			maxi=m;
			mini=n;
		}
		diff=maxi-mini;
		if(diff<=k)cout<<"0"<<endl;
		else cout<<diff-k<<endl;
	}
}
