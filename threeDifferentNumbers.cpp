#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		long long ans=1,i;
		for(i=0;i<3;i++){
			ans=(a[i]-i)%mod*(ans%mod);
		}
		cout<<ans<<endl;
	}
}
