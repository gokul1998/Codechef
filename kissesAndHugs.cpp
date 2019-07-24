#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,expo=1,mul=1,i;
		cin>>n;
		if(n==1)cout<<"2"<<endl;
		else if(n==2)cout<<"4"<<endl;
		else{
				expo=(expo<<n)%MOD;
				mul=((n-2)*2)%MOD;
				//cout<<expo<<"  "<<mul<<endl;
			cout<<(expo-mul)%MOD<<endl;
		}
		}
	}
