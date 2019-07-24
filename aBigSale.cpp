#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		double res=0.0,inc=0.0,dec=0.0,curr=0.0;
		ll p[n],q[n],d[n];
		for(i=0;i<n;i++){
			cin>>p[i]>>q[i]>>d[i];
		}
		for(i=0;i<n;i++){
			inc=(double)d[i]/100*p[i];
			curr=(double)inc+p[i];
			dec=(double)d[i]/100*curr;
			curr=(double)curr-dec;
			curr=(double)p[i]-curr;
			res+=(double)curr*q[i];
			//cout<<"inc = "<<inc<<"  curr = "<<curr<<"  dec = "<<dec<<endl;
			//cout<<"res = "<<res<<endl;
		}
		cout<<setprecision(6)<<fixed<<res<<endl;
	}
}
