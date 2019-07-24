#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.size(),i,up=0,down=0;
		char temp=s[0];
		for(i=1;i<len;){
			while(temp==s[i] && i<len)i++;
			if(temp=='U')up++;
			else down++;
			if(temp!=s[i] && i<len)temp=s[i];
		}
		if(up<=down)cout<<up<<endl;
		else cout<<down<<endl;
	}
}
