#include<bits/stdc++.h>
using namespace std;
long long find(long long father[],long long x)
{
	long long y = x;
	while (x != father[x]) {
		x = father[x];
	}
	for (;y != x;) {
		int t = father[y];
		father[y] = x;
		y = t;
	}
	return x;
}

void print(long long a[],long long n){
	cout<<endl;
	for(long long i=1;i<=n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		long long num,win,lose,maxi,q,s[n+1],x,y,owner[n+1],mini;
		for(i=1;i<=n;i++){
		 cin>>s[i];
		 owner[i]=i;
	}
	cin>>q;
	while(q--){
		cin>>num;
		if(num==0){
			cin>>x>>y;
			int fx=find(owner,x),fy=find(owner,y);
			if(fx==fy)cout<<"Invalid query!"<<endl;
			else{
				if(s[fx]>s[fy])owner[fy]=fx;
				else if(s[fx]<s[fy])owner[fx]=fy;
			}
			//ll a;
//			unions(owner,x,y);
//print(owner,n);
		}
		else{
			cin>>x;
			cout<<find(owner,x)<<endl;
		}
	}
	}
}
