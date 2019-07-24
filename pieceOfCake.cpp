#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int i,len,a[26]={0},flag=0;
		cin>>s;
		len=s.size();
		for(i=0;i<len;i++)a[s[i]-'a']++;
		for(i=0;i<26;i++){
			if((len%2==0 && a[i]==len/2)){
				flag=1;
				break;
			}
		}
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
