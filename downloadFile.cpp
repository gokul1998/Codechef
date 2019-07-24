#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,n,k,t,d,flag=0;
		cin>>n>>k;
		long long cost=0;
		for(i=0;i<n;i++){
			cin>>t>>d;
			if(flag==0 && k>0 && t-k>0){
				cost+=((t-k)*d);
				flag=1;
			}
			else if(flag==0 && k>0 && t-k==0 )flag=1;
			else if(flag==0 && k>0 && t-k<0)k=k-t;
			else cost+=(t*d);
		}
		cout<<cost<<endl;
	}
}
