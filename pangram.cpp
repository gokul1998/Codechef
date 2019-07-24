#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i;
		long long price[26],a[26]={0},total=0;
		for(i=0;i<26;i++)cin>>price[i];
		string s;
		cin>>s;
		long long len=s.size();
		for(i=0;i<len;i++)a[s[i]-'a']++;
		for(i=0;i<26;i++){
			if(a[i]==0)total+=price[i];
		}
		cout<<total<<endl;
	}
}
