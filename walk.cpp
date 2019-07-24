#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		long long n,i;
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++){
		cin>>a[i];
	}
	long long velocity=a[n-1];
	for(i=n-2;i>=0;i--){
		velocity+=1;
		if(velocity<a[i])velocity=a[i];
	}
	cout<<velocity<<endl;
	}
}
