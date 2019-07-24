#include<bits/stdc++.h>
using namespace std;
long long count(long long n){
	long long c=0;
	while(n){
		if(n&1)c++;
		n=n/2;
	}
	return c;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long i,p=1,a,b,set=0,unset=0,ans=0,num=0;
		cin>>n>>a>>b;
		set=count(a)+count(b);
		unset=2*n-set;
		ans=min(set,unset);
		//cout<<"set = "<<set<<" unset = "<<unset<<endl;
		p=pow(2,n-1);
		for(i=0;i<ans;i++){
			num+=p;
			p=p/2;
		}
		//num=num<<(n-ans);
		cout<<num<<endl;
	}
}
