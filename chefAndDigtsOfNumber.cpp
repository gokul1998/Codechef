#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,len=s.size(),zero=0,one=0;
		for(i=0;i<len;i++){
			if(s[i]=='0')zero++;
			else one++;
		}
		if(one==1 || zero==1)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
