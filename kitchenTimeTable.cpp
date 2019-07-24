#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		long long int a[n],b[n],c=0;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n;i++)cin>>b[i];
		for(i=0;i<n;i++){
			if(i==0 && a[i]>=b[i])c++;
			else if(a[i]-a[i-1]>=b[i])c++;
		}
		cout<<c<<endl;
	}
}
