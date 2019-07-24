#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int i,n;
		cin>>n;
		int flag=0,f=0;
		long long int a[n],hash[1001]={0},maxi=-1,ind=-1,l=0,b=0;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++)hash[a[i]]++;
		for(i=1000;i>0;i--){
			if(hash[i]>=4){
				if(l==0 && b==0){
					l=i;
					b=i;
					break;
				}
				else if(l==0)l=i;
				else if(b==0)b=i;
			}
			else if(hash[i]>=2){
				if(l==0)l=i;
				else if(b==0)b=i;
			}
			if(l!=0 && b!=0)break;
	}
	if(l==0 || b==0)cout<<"-1"<<endl;
	else cout<<l*b<<endl;
}
}
