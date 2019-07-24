#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long long n,d,i;
		cin>>n>>d;
		long long a[n],sum=0;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(i=n-1;i>=0;i--){
			if(i-1>=0 && a[i]-a[i-1]<d){
				sum+=(a[i]+a[i-1]);
				i--;
			}
		}
		cout<<sum<<endl;
	}
}
