#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int i,n,k;
		cin>>n>>k;
		long long int a[n],sum=0;
		double avg=0.0;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(i=k;i<n-k;i++)sum+=a[i];
		avg=(double)sum/(n-k-k);
		cout<<fixed<<setprecision(6)<<avg<<endl;
		/*double c=(double)sum/(double)(n-(2*k));
        cout<<setprecision(6)<<fixed;
        cout<<c<<endl;*/
	}
}
