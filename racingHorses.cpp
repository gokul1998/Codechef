#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		long long a[n],mini=INT_MAX,curr=0;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n-1;i++){
			curr=a[i+1]-a[i];
			mini=min(mini,curr);
		}
		cout<<mini<<endl;
	}
}
