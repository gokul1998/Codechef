#include<bits/stdc++.h>
#define mod 10000009
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long flag=0,i,len,j,two=0,one=0,res=1;
		string s;
		cin>>s;
		len=s.size();
		i=0,j=len-1;
		while(i<=j){
			if(s[i]=='?' && s[j]=='?'){
				two=1;
				res=(res*26)%mod;
			}
			if(s[i]!=s[j] && s[i]!='?' && s[j]!='?'){
				flag=1;
				break;
			}
			i++;
			j--;
		}
		if(flag)cout<<"0"<<endl;
		else cout<<res<<endl;
	}
}
