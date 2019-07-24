#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,i;
	cin>>n;
	ll a[n],b[n];
	for(i=0;i<n;i++)cin>>a[i];
	b[0]=a[0],b[1]=a[1],b[2]=a[2];
	for(i=3;i<n;i++){
		b[i]=a[i]+max(b[i-1],max(b[i-2],b[i-3]));
	}
	for(i=0;i<n;i++)cout<<b[i]<<" ";
}
