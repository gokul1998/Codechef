#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,i,j;
	ll x,res=0,q,mini=0;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)cin>>a[i];
	cin>>q;
	while(q--){
	cin>>x;
	res=0;
	for(i=0;i<n;i++){
		mini=a[i];
		for(j=i;j<n;j++){
			if(mini<x)break;
			if(a[j]<mini)mini=a[j];
			if(mini==x)res++;
		}
	}
	cout<<res<<endl;
}
}
