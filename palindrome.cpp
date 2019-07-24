#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll power(ll base,ll exp){
	ll res=1;
	while(exp>0){
		if(exp&1)res=(res*base)%MOD;
		base=(base*base)%MOD;
		exp/=2;
	}
	return res%MOD;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,res=26,i,base=26,exp;
		cin>>n;
		for(i=2;i<=n;i++){
			//exp=ceil(i/2);
			if(i&1)exp=(i/2)+1;
			else exp=i/2;
			ll p=power(base,exp);
			//cout<<"exp "<<exp<<"  power = "<<p<<endl;
			res+=(p)%MOD;
		}
		cout<<res<<endl;
	}
}
