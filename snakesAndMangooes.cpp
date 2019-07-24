#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,len=s.size(),m=0,sn=0;
		for(i=0;i<len;i++){
			if(s[i]=='m'){
				if(i-1>=0 && s[i-1]=='s')s[i-1]='*';
				else if(i+1<len && s[i+1]=='s')s[i+1]='*';
			}
		}
		//cout<<s;
		for(i=0;i<len;i++){
			if(s[i]=='m')m++;
			else if(s[i]=='s')sn++;
		}
		if(m>sn)cout<<"mongooses"<<endl;
		else if(m<sn)cout<<"snakes"<<endl;
		else cout<<"tie"<<endl;
	}
}
