#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		string s;
		cin>>n>>s;
		int a[n];
		for(i=0;i<n;i++)cin>>a[i];
		if(s[2]=='e'){
			if(n==1 && a[0]%2==0)cout<<"Dee"<<endl;
			else cout<<"Dum"<<endl;
		}
		else cout<<"Dum"<<endl;
	}
}
