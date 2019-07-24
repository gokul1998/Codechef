#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,q,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	long long ans=0,range=0;
	cin>>q;
	while(q--){
		cin>>k;
		ans=0;
	//	cout<<"n = "<<n<<"  k = "<<k<<endl;
		if(n%(k+1)==0)range=(n/(k+1));
		else{
		range=(n/(k+1));
		range+=1;
	}
	//	cout<<range<<" hej"<<endl;
		for(i=0;i<range;i++)ans+=a[i];
		cout<<ans<<endl;
	}
}
