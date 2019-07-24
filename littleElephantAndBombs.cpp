#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,c=0;
		cin>>n;
		string s;
		cin>>s;
		for(i=0;i<n;i++){
			if(s[i]=='1'){
				if(i-1>=0 && s[i-1]!='1')s[i-1]='2';
				if(i+1<n && s[i+1]!='1')s[i+1]='2';
				s[i]='2';
			}
		}
		for(i=0;i<n;i++){
			if(s[i]=='0')c++;
		}
		cout<<c<<endl;
	}
}
