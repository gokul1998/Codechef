#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		long long a[n],b[n]={0};
		for(i=0;i<n;i++)cin>>a[i];
		b[n-1]=1;
		for(i=n-2;i>=0;i--){
			if((a[i]<=0 && a[i+1]>0)||(a[i]>=0 && a[i+1]<0)){
				b[i]=b[i+1]+1;
			}
			else b[i]=1;
		}
		for(i=0;i<n;i++)cout<<b[i]<<" ";
		cout<<endl;
	}
}
