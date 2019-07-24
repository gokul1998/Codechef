#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i;
		cin>>n;
		long long a[n],gd=0,flag=0;
		for(i=0;i<n;i++){
		cin>>a[i];
		gd=__gcd(gd,a[i]);
	}
		for(i=2;i<=sqrt(gd);i++){
			if(gd%i==0){
				flag=1;
			break;
		}
		}
		if(gd==1)cout<<"-1"<<endl;
		else if(flag==1)cout<<i<<endl;
		else cout<<gd<<endl;
	}
}
