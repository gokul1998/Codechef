#include<bits/stdc++.h>
using namespace std;
int main(){
			long long i,j,n,k,res=0;
		cin>>n>>k;
		long long a[n];
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(abs(a[j]-a[i])>=k)break;
			}
			res+=(n-j);
		}
		cout<<res<<endl;
	
}
