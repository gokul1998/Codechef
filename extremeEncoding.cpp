#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		int n,j;
		cin>>n;
		long long arr[n],a[n],b[n],x,y;
		for(j=0;j<n;j++)cin>>arr[j];
		for(j=0;j<n;j++){
			y=arr[j]>>16;
			//cout<<"  y= "<<y<<"arr[j] = "<<arr[j]<<endl;
			x=(~(y<<16)) & (arr[j]);
			a[j]=x,b[j]=y;
			//cout<<"x= "<<x<<"y="<<y<<endl;
		}
		cout<<"Case "<<i<<":"<<endl;
		for(j=0;j<n;j++)cout<<a[j]<<" ";
		cout<<endl;
		for(j=0;j<n;j++)cout<<b[j]<<" ";
		cout<<endl;
	}
}
