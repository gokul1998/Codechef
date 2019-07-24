#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x,i,mini=INT_MAX;
		cin>>n>>x;
		long long a[n],num,s=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			mini=min(mini,a[i]);
			s+=a[i];
		}
		if(s%x==0 || s%x<mini)cout<<s/x<<endl;
		else cout<<"-1"<<endl;
		//else cout<<items<<endl;
	}
}
