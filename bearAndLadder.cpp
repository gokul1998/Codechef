#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	while(q--){
		long long a,b,even,odd;
		cin>>a>>b;
		if(a%2==0 && b%2==0 && abs(a-b)==2)cout<<"YES"<<endl;
		else if(a&1 && b&1 && abs(a-b)==2)cout<<"YES"<<endl;
		else{
			if(a%2==0)even=a,odd=b;
			else even=b,odd=a;
			if(even-1==odd)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
