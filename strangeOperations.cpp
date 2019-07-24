#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long i,n,k,count=0;
		cin>>n>>k;
		long long a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]&1)count++;
		}
		if(count%2==0){
			if(k==1)cout<<"odd"<<endl;
			else cout<<"even"<<endl;
		}
		else cout<<"even"<<endl;
	}
}
