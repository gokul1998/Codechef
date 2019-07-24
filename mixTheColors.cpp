#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		map<ll,ll> m;
		ll n,i,res=0,num;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>num;
			a[i]=num;
			m[num]++;
		}
		map<ll,ll>::iterator p;
		for(p=m.begin();p!=m.end();p++){
			res+=(p->second)-1;
		}
		cout<<res<<endl;
	}
}
