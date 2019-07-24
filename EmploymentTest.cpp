#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,i;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		cout<<a[(n+k)/2]<<endl;
	}
}
