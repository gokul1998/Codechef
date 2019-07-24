#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.size(),i,one=0,zero=0,flag=0;
		for(i=0;i<len;i++){
			if(one==1 && zero==1 && s[i]=='1'){
				flag=1;
				break;
			}
			if(one==0 && s[i]=='1')one=1;
			if(one==1 && s[i]=='0')zero=1;
		}
		if(flag==0 && one==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
