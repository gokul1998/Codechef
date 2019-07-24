#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,q,i,j,l,r,maxi=-1,res=0;
	cin>>n>>q;
	ll a[n];
	for(i=0;i<n;i++)cin>>a[i];
	while(q--){
		cin>>l>>r;
		res=0;
		for(j=0;j<=INT_MAX;j++){
		for(i=l;i<=r;i++){
			res+=(a[i]^j);
		}
		if(res>maxi)res=maxi;
		else break;
	}
	
	}
}
