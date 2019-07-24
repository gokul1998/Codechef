#include<bits/stdc++.h>
using namespace std;
long long next(long long  index){
	return index + (index & -index);
}
long long parent(long long index){
	return index - (index & -index);
}
long long getsum(long long j,long long b[]){
	        long long ind=j+1,res=0;
			while(ind>0){
			//	cout<<"ind = "<<ind<<endl;
				res+=b[ind];
				ind=parent(ind);
			}
			return res;
}
int main(){
	long long int n,i,j,ind=0,q,k,res=0;
	cin>>n>>q;
	long long int a[n],b[n+2];
	char c;
	for(i=0;i<n;i++)cin>>a[i];
	memset(b,0,sizeof(b));
	for(i=0;i<n;i++){
		ind=i+1;
		while(ind<=n+1){
			b[ind]+=a[i];
			ind=next(ind);
		}
	}
	//for(i=0;i<=n;i++)cout<<b[i]<<" ";
	while(q--){
		cin>>c>>i>>j;
		if(c=='S'){
			res=getsum(j,b)-getsum(i-1,b);
			cout<<res<<endl;
		}
		else if(c=='G'){
			ind=i+1;
			while(ind<=n+1){
			b[ind]+=j;
			ind=next(ind);
		}
		}
		else if(c=='T'){
			ind=i+1;
			while(ind<=n+1){
			b[ind]-=j;
			ind=next(ind);
		}
		}
	}
}
