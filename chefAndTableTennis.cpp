#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int flag=0,i,len=s.size(),chef=0,opp=0;
		for(i=0;i<len;i++){
			if(s[i]=='0')opp++;
			else chef++;
			if(chef==11 && opp<10){
				flag=1;
				break;
			}
			else if(opp==11 && chef<10)break;
			else if(chef>=10 && opp>=10 && chef-opp>=2){
				flag=1;
				break;
			}
			else if(chef>=10 && opp>=10 && opp-chef>=2)break;
		}
		if(flag)cout<<"WIN"<<endl;
		else cout<<"LOSE"<<endl;
	}
}
