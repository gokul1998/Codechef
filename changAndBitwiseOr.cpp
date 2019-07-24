#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i;
		cin>>n;
		long long a[n],res=0;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++)res=res|a[i];
		cout<<res<<endl;
	}
}
