#include<bits/stdc++.h>
using namespace std;
int main(){
		long long n,m,q,i,maxi=0,diff=0;
		cin>>n>>m;
		maxi=n;
		while(m--){
			cin>>q;
			if(q<=n+1 || q>3*n)cout<<0<<endl;
			else{
				diff=q-n-1;
				if(diff<=maxi)cout<<diff<<endl;
				else cout<<(2*maxi)-diff<<endl;
			}
		}
	}
