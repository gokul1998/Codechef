#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,flag=0;
		long long ans=0;
		cin>>n;
		int maxi=-1,a[n],b[100001]={0};
		for(i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		for(i=0;i<=100000;i++)maxi=max(maxi,b[i]);
		for(i=0;i<=100000;i++){
			if(b[i]==maxi && flag==0)flag=1;
			else if(b[i]==maxi && flag==1)ans+=b[i];
			else ans+=b[i];
		}
		cout<<ans<<endl;
	}
}
