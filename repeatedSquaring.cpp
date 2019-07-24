#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long power(long long a,long long n){
	if(n==0)return 1;
	if(n==1)return a;
	if(n&1)return a*power(a*a,(n-1)/2);
	else return power(a*a,n/2);
}
int main(){
	long long x,y;
	cin>>x>>y;
	cout<<power(x,y);
	}
