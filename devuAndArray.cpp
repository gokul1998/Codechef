#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,q;
	cin>>n>>q;
	//cout<<"q  = "<<q<<endl;
	long long a[n],i,t;
	for(i=0;i<n;i++)cin>>a[i];
	long long min=1000000001,max=-1;
	for(i=0;i<n;i++){
		if(min>a[i])min=a[i];
		if(max<a[i])max=a[i];
	}
	for(i=0;i<q;i++){
		//cout<<"i = "<<i<<endl;
		cin>>t;
		if(t>=min && t<=max)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
