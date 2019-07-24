#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		long long c=0;
		cin>>n;
		string s;
		cin>>s;
		for(i=0;i<n;i++){
			if(s[i]=='1')c++;
		}
		cout<<c*(c+1)/2<<endl;
	}
}
