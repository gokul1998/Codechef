#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,num;
		cin>>n;
		num=n%8;
		if(num==1)cout<<n+3<<"LB"<<endl;
		else if(num==2)cout<<n+3<<"MB"<<endl;
		else if(num==3)cout<<n+3<<"UB"<<endl;
		else if(num==4)cout<<n-3<<"LB"<<endl;
		else if(num==5)cout<<n-3<<"MB"<<endl;
		else if(num==6)cout<<n-3<<"UB"<<endl;
		else if(num==7)cout<<n+1<<"SU"<<endl;
		else if(num==0)cout<<n-1<<"SL"<<endl;
	}
}
