#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m,i;
		cin>>n>>m;
		long long a[n],b[m],hash[1000]={0},c=0;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<m;i++)cin>>b[i];
		for(i=0;i<n;i++)hash[a[i]]=1;
		for(i=0;i<m;i++){
			if(hash[b[i]]==1)c++;
		}
		cout<<c<<endl;
	}
}
