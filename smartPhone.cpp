#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,i,res,maxi=-1;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++){
		res=a[i]*(n-i);
		//cout<<res<<"  h"<<endl;
		maxi=max(maxi,res);
	}
	cout<<maxi<<endl;
}
