#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,c=0,r=0;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<n;){
		c=0;
		while(i<n && a[i]==1){
			i++;
			c++;
			if(c==k){
				r=1;
				i=n;
				break;
			}
		}
		if(i<n && a[i]==0)i++;
	}
	if(r==1 || k==0)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
