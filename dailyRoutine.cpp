#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,len=s.size(),flag=0;
		char temp=s[0];
		for(i=1;i<len;i++){
			if(temp=='E' && s[i]=='C'){
				flag=1;
				break;
			}
			if((temp=='S' && s[i]=='C')||(temp=='S' && s[i]=='E')){
				flag=1;
				break;
			}
			if(s[i]!=temp)temp=s[i];
		}
		if(flag==0)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}
