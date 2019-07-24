#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,i;
		string b;
		cin>>a;
		cin>>b;
		long long len=b.size(),num=0;
		if(a==0)cout<<b<<endl;
		else{
		for(i=0;i<len;i++){
			num=((num*10)+(b[i]-'0'))%a;
		}
		cout<<__gcd(a,num)<<endl;
	}
}
}
