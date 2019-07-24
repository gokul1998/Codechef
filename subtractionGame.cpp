#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		long long a[n],res;
		for(i=0;i<n;i++)cin>>a[i];
		res=a[0];
		for(i=1;i<n;i++){
			res=gcd(a[i],res);
		}
		cout<<res<<endl;
	}
}

