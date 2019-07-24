#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,len=s.size(),flag=0;
		int first[26]={0},second[26]={0},flen=len/2;
		for(i=0;i<flen;i++)first[s[i]-'a']++;
		if(len&1)flen+=1;
		for(i=len-1;i>=flen;i--)second[s[i]-'a']++;
		for(i=0;i<26;i++){
			if(first[i]!=second[i]){
				flag=1;
				break;
			}
		}
		if(flag)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
