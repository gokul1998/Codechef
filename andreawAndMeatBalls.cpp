#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		int n,i,flag=0;
		long long m;
		cin>>n>>m;
		long long a[n],res=0,sum=0;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(i=n-1;i>=0;i--){
			res+=1;
			sum+=a[i];
			if(sum>=m){
				flag=1;
				break;
			}
		}
		if(flag)cout<<res<<endl;
		else cout<<"-1"<<endl;
	}
}
