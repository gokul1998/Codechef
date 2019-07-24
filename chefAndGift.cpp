#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,i,len=0;
		cin>>n>>k;
		long long a[n],flag=0;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++){
			if(a[i]%2==0)len++;
		}
	    if(k==0 && len==n)cout<<"NO"<<endl;
	    else if(len>=k)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}
