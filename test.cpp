#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	long long len=s.size(),i;
	cout<<len<<endl;
	for(i=0;i<len;i++){
		if(s[i]>='A' && s[i]<='Z')s[i]+=32;
		cout<<s[i];
	}
}
