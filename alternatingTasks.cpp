#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int x[n],y[n];
		for(i=0;i<n;i++)cin>>x[i];
		for(i=0;i<n;i++)cin>>y[i];
		long long xodd=0,yodd=0,xeven=0,yeven=0,xf=0,yf=0;
		for(i=0;i<n;i++){
			if(i%2==0 || i==0){
				xeven+=x[i];
				yeven+=y[i];
			}
			else{
				yodd+=y[i];
				xodd+=x[i];
			}
		}
		xf=xeven+yodd;
		yf=yeven+xodd;
		cout<<min(xf,yf)<<endl;
	}
}
