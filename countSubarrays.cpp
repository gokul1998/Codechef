#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,sum=0;
		cin>>n;
		long long a[n],b[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			b[i]=1;
		}
		sum=1;
		for(i=1;i<n;i++){
			if(a[i]>=a[i-1])b[i]=b[i]+b[i-1];
			sum+=b[i];
		}
		cout<<sum<<endl;
	}
}
