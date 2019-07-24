#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long int a[n],hash[100090]={0},i;
	for(i=0;i<n;i++)cin>>a[i];
	for(i=1;i<=n;i++){
		if(a[i-1]==0)hash[i]=2;
		hash[a[i-1]]=1;
	}
	for(i=1;i<=100000;i++){
		if(hash[i]==0 && i<=n)cout<<i<<" ";
	}
	
}
