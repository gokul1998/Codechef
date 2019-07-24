#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,k,n,i,p,c,req,flag=0;
		cin>>x>>y>>k>>n;
		req=x-y;
		for(i=0;i<n;i++){
			cin>>p>>c;
			if(p>=req && c<=k)flag=1;
		}
		if(flag)cout<<"LuckyChef"<<endl;
		else cout<<"UnluckyChef"<<endl;
	}
}
