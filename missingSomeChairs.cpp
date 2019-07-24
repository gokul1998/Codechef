#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
/*long long ncr(ll n,ll k){
	ll res=1,i;
	if(k>n-k)k=n-k;
	for(i=0;i<k;i++){
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}*/
long long power(long long a,long long b){
if(b==0)return 1;
	long long temp;	
	temp=power(a,b/2)%1000000007;
	if(b%2==0)
	return temp*temp;
	else
	return a*temp*temp;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,res=0;
		cin>>n;
		res=(power(2,n))%MOD;
		cout<<res-1<<endl;
	}
}
