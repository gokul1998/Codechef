#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long curr=0,n,b,m,tot=0,i;
		cin>>n>>b>>m;
		while(n!=0){
			if(n&1)curr=(n+1)/2;
			else curr=n/2;
			tot=tot+(curr)*m;
			n=n-curr;
			if(n!=0)tot+=b;
			m=m*2;
		}
		cout<<tot<<endl;
	}
}
