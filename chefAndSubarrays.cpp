#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		long long int a[n],sum=0,pro=1,count=n;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++){
			sum=a[i],pro=a[i];
			for(j=i+1;j<n;j++){
				sum+=a[j];
				pro*=a[j];
				if(sum==pro)count++;
			}
			//sum=0,pro=1;
		}
		cout<<count<<endl;
	}
}
