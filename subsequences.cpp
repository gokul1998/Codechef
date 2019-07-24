#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,a[26]={0},len=s.size(),flag=0;
		for(i=0;i<len;i++){
			a[s[i]-'a']++;
			if(a[s[i]-'a']>1){
				flag=1;
				break;
			}
		}
		if(flag==1)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}
