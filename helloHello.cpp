#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		float r,d,u,res=0.0,mini=0.0,n,m,c,maxi=0;
		int ind=0,i;
		cin>>d>>u>>n;
		mini=u*d;
		for(i=1;i<=n;i++){
			cin>>m>>r>>c;
			res=(u*r)+(c/m);
			
			if(mini-res>maxi){
				//cout<<"res = "<<res<<" "
				maxi=mini-res;
				ind=i;
			}
		}
		cout<<ind<<endl;
	}
}
