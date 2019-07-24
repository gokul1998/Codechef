#include<bits/stdc++.h>
using namespace std;
long long sum(long long a){
	return a*(a+1)/2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int d,n,i;
		cin>>d>>n;
		long long s=n*(n+1)/2;
		for(i=1;i<d;i++){
			s=sum(s);
		}
		cout<<s<<endl;
	}
}
