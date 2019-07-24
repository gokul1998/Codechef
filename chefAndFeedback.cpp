#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,len=s.size(),flag=0;
		for(i=0;i<=len-2;i++){
			if((s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')||(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')){
				flag=1;
				break;
			}
		}
		if(flag)cout<<"Good"<<endl;
		else cout<<"Bad"<<endl;
	}
}
