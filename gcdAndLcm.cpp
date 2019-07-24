#include<bits/stdc++.h>
using namespace std;
long long gd(long long a,long long b){
	if(a==b)return a;
	if(a>=b)return gd(a-b,b);
	else return gd(a,b-a);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long gcd=gd(a,b);
		long long lcm=(a*b)/gcd;
		cout<<gcd<<" "<<lcm<<endl;
	}
}
