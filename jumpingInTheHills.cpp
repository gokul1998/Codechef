#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,u,d,i,ind=1,para=0;
		cin>>n>>u>>d;
		ll a[n];
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n-1;i++){
			if(a[i+1]-a[i]>u)break;
			else if(a[i]-a[i+1]>d && para==0){
				para=1;
				ind++;
			}
			else if(a[i]-a[i+1]>d && para==1)break;
			else ind++;
		}
		cout<<ind<<endl;
	}
}
