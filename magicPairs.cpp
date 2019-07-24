#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long num,n,i;
		cin>>n;
		for(i=0;i<n;i++)cin>>num;
		cout<<n*(n-1)/2<<endl;
	}
}
