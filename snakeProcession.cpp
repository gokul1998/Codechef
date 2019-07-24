#include<bits/stdc++.h>
using namespace std;
int main(){
	int r;
	cin>>r;
	while(r--){
		int len,i,flag=0;
		cin>>len;
		string s;
		cin>>s;
		char t=' ';
		for(i=0;i<len;i++){
			if((t==' ' && s[i]=='T')||(t=='H' && s[i]=='H')||(t=='T' && s[i]=='T')){
				flag=1;
				break;
			}
			if(s[i]!='.')t=s[i];
		}
		if(flag==0 && (t=='T' || t==' '))cout<<"Valid"<<endl;
		else cout<<"Invalid"<<endl;
	}
}
