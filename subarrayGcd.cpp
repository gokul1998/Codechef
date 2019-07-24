#include<bits/stdc++.h>
using namespace std;
int main(){
	//sieve();
	int t;
	cin>>t;
	while(t--){
		long long n,i,prime=0,ans=1;
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++){
		cin>>a[i];
	}
	ans=0;
		for(i=0;i<n;i++){
			ans=__gcd(a[i],ans);
		}
		if(ans==1)printf("%d\n",n);
		else printf("-1\n");
	}
}

