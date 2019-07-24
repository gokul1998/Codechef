#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[26]={0};
		long long i,len=s.size(),res=0;
		for(i=0;i<len;i++)a[s[i]-'a']=1;
		for(i=0;i<26;i++){
			if(a[i]==1)res++;
		}
		cout<<res<<endl;
	}
}
