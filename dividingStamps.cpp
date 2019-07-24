#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,sum=0;
	cin>>n;
	long long a,i;
	for(i=0;i<n;i++){
		cin>>a;
		sum+=a;
	}
	if((n*(n+1)/2)==sum)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
