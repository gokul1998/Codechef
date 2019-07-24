#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,i,maxi=0,curr=0,start=-1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<n;){
		if(a[i]!=0)start=i;
		while(i<n && a[i]!=0)i++;
		if((a[i]==0 || i==n) && start!=-1){
			curr=i-start;
			maxi=max(maxi,curr);
		}
		i++;
		start=-1;
	}
	cout<<maxi<<endl;
}
