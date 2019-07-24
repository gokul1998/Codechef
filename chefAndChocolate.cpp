#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		if((((n%2)*(m%2))%2)==0)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
