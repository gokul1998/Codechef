#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n,i,sum=0;
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sum/=(n-1);
	for(i=0;i<n;i++){
		cout<<sum-a[i]<<" ";
	}	
	cout<<endl;
	}
}
