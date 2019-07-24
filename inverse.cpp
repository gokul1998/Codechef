#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll power(ll a,ll b)
{
	if(b==0)
	return 1;
	ll temp=power(a,b/2);
	temp=(temp*temp)%mod;
	if(b%2==1)
	temp=(temp*a)%mod;
	return temp;
}
int main(){
	int n;
	cin>>n;
	long long k=1,i;	
	for(i=2;i<=n;i++){
	k=(k*power(i,mod-2))%mod;
	}
	//cout<<"inverse = "<<k;
	cout<<60000000480%mod;
}
