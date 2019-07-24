#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void update(ll a[],ll n,ll index,ll c){
	while(index<=n){
		a[index]+=c;
		index+=(index & (-index));
	}
}
ll query(ll a[],ll n,ll index){
	ll res=0;
	while(index>0){
		cout<<"ind = "<<index<<endl;
		res+=a[index];
		index-=(index & (-index));
	}
	cout<<"query"<<endl;
	return res;
}
int main(){
	ll ind,n,m,c,i,j,u,v,k;
	char ch;
	scanf("%lld%lld%lld",&n,&m,&c);
	long long a[n+1];
	memset(a,0,sizeof(a));
	update(a,n,1,c);
	while(m--){
		scanf("%c",&c);
		if(ch=='S'){
			scanf("%lld%lld%lld",&u,&v,&k);
			update(a,n,u,k);
			if(v!=n)update(a,n,v+1,-k);
		}
		else{
			ll in;
			scanf("%lld",&in);
			cout<<"inpu  "<<in<<endl;
			printf("%lld\n",query(a,n,in));
		}
	}
}
