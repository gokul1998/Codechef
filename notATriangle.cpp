#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n=1;
	while(n!=0){
		cin>>n;
		long long a[n],i,j,k,sum=0,res=0;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n-2;i++){
			k=i+2;
			for(j=i+1;j<n-1;j++){
				//sum=a[i]+a[j];
				while(k<n && a[i]+a[j]>=a[k]){
					k++;
				}
				res+=(n-k);
			}
		}
		if(n!=0)cout<<res<<endl;
	}
}
