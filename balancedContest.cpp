#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		long long p;
		cin>>n>>p;
		long long a[n];
		for(i=0;i<n;i++)cin>>a[i];
		int cake=0,hard=0,easy=p/2,diff=p/10;
		for(i=0;i<n;i++){
			if(a[i]<=diff)hard++;
			if(a[i]>=easy)cake++;
		}
		if(cake==1 && hard==2)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}
