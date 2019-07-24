#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long ans=0,res=0,i,len=s.size();
		stack<char>a;
		for(i=0;i<len;i++){
			if(s[i]=='<')res++;
			else{
				res--;
				if(res==0)ans=max(ans,i+1);
				if(res<0)break;
			}
		}
		cout<<ans<<endl;
	}
}
