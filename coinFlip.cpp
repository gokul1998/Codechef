#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		while(g--){
			long long n,i,c=0;
			int ini,fin;
			cin>>ini>>n>>fin;
			c=n/2;
			if(ini==fin)cout<<c<<endl;
			else cout<<n-c<<endl;
		}
	}
}
