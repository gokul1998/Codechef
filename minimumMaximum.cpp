#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n,i;
		cin>>n;
		long int a[n],min=INT_MAX;
		for(i=0;i<n;i++)cin>>a[i];
		min=a[0];
		for(i=1;i<n;i++){
			if(min>a[i])min=a[i];
		}
		cout<<min*(n-1)<<endl;
	}
}
