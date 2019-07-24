#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,n,maxi,mini;
		cin>>a>>b>>n;
		if(a>b)maxi=a,mini=b;
		else maxi=b,mini=a;
		if(n%2==0){
			cout<<maxi/mini<<endl;
		}
		else{
			if(maxi==a)cout<<(a*2)/b<<endl;
			else if(a*2<=b)cout<<b/(a*2)<<endl;
			else cout<<(a*2)/b<<endl;
		}
	}
}
