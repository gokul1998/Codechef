#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		int i,x,n,y,sum=0;
		cin>>n;
		for(i=0;i<n;i++)cin>>x>>y;
		for(i=1;i<=n;i++)sum^=i;
		cout<<sum<<endl;
	}
}
