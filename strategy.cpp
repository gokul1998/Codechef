#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,q,pro=1;
		cin>>n>>q;
		long long int num,i;
		for(i=0;i<n;i++){	
		cin>>num;
		pro*=num;
	}
		int x;
		while(q--){
			cin>>x;
			if(pro!=0)cout<<x/pro<<" ";
		}
		cout<<endl;
	}
}
