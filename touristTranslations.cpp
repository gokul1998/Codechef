#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string a;
	cin>>t;
	cin>>a;
	while(t--){
		string b;
		cin>>b;
		int caps=0,index,i,len=b.size(),special=0,under=0;
		for(i=0;i<len;i++){
			if(b[i]>='a' && b[i]<='z'){
				index=b[i]-'a';
			}
			else if(b[i]>='A' && b[i]<='Z'){
				caps=1;
				char c=b[i]+32;
				index=c-'a';
			}
			else if(b[i]=='_'){
			cout<<" ";
			under=1;
		}
			else{
				cout<<b[i];
				special=1;
			}
			if(caps==0 && special==0 && under==0)cout<<a[index];
			else if(caps==1 && special==0 && under==0){
				char u=a[index]-32;
				cout<<u;
			}
			caps=0,special=0,under=0;
		}
		cout<<endl;
	}
}

