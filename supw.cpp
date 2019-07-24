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
		b[i]=a[i]+min(b[i-1],min(b[i-2],b[i-3]));
	}
	cout<<min(b[n-1],min(b[n-2],b[n-3]))<<endl;
}
