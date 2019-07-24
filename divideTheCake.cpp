#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a1=0,a2=0,a3=0;
		cin>>n;
		if(360%n==0)a1=1;
		if(n<=360)a2=1;
		if(n*(n+1)/2<=360)a3=1;
		if(a1==1)cout<<"y ";
		else cout<<"n ";
		if(a2==1)cout<<"y ";
		else cout<<"n ";
		if(a3==1)cout<<"y ";
		else cout<<"n ";
		cout<<endl;
	}
}
