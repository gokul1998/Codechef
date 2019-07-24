#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,i,res=0,j,sum=0;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		sum-=a[i];
		res=res+abs((sum-((n-i-1)*a[i])));
	}
	cout<<res<<endl;
}
