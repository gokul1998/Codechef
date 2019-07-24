#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		long long ans=0,range=ceil(sqrt(n));
		for(i=1;i<=sqrt(n);i++){
			if(n%i==0){
			if(n/i==i){
			ans+=i;
			//cout<<"i = "<<i<<endl;
		}
		else{
			ans+=i;
			ans+=(n/i);
		}
	}
	}
		//if(n!=1)ans+=n;
		cout<<ans<<endl;
	}

}
