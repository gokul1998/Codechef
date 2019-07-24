#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.size(),i,c=0;
		for(i=0;i<len-1;i++){
			if(s[i]=='<' && s[i+1]=='>')c++;
		}
		cout<<c<<endl;
	}
}
