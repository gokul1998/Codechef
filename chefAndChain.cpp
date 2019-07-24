#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		char plus='+',minus='-';
		long long ans=0,i,len=s.size(),ans2=0;
		for(i=0;i<len;i++){
			if(i%2==0 && s[i]!='-')ans++;
			else if(i%2==1 && s[i]!='+')ans++;
		}
		for(i=0;i<len;i++){
			if(i%2==0 && s[i]!='+')ans2++;
			else if(i%2==1 && s[i]!='-')ans2++;
		}
		cout<<min(ans,ans2)<<endl;
	}
}
