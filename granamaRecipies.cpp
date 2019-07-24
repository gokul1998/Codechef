#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int af[26]={0},bf[26]={0},i,j,chef=0,actual=1;
		int len=a.size(),len2=b.size();
		for(i=0;i<len;i++)af[a[i]-'a']++;
		for(i=0;i<len2;i++)bf[b[i]-'a']++;
		for(i=0;i<26;i++){
			if((af[i]!=0 && bf[i]==0)||(af[i]==0 && bf[i]!=0)){
				chef=1;
			}
			if(af[i]!=bf[i])actual=0;
		}
		if((chef==1)||(chef==0 && actual==1))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
