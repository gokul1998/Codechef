#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
long long lcm(long long a,long long b){
	return (a*b)/gcd(a,b);
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n],i,j,res=INT_MAX;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				res=min(res,lcm(a[i],a[j]));
			}
		}
		cout<<res<<endl;
	}
}
