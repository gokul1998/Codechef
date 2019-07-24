#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int flag=0,i,len=s.size();
		char a=s[0],b=s[1];
		for(i=2;i<len;i++){
			if((i%2==0 && s[i]!=a)||(i&1 && s[i]!=b)){
				flag=1;
				break;
			}
		}
		if(flag || s[0]==s[1])cout<<"NO"<<endl;
		else if(s[0]!=s[1])cout<<"YES"<<endl;
	}
}
