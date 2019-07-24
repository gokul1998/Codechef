#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long sum(long long n){
		long long s=0,i,num=n;
		while(num!=0){
			s+=(num%10);
			num/=10;
		}
		if(s<10)return s;
		else return sum(s);
}
int main(){
	long long t,d;
	cin>>t;
	while(t--){
		cin>>d;
		cout<<sum(d+1)<<endl;
	}
}
