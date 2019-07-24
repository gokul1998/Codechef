#include<bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
bool small(char c){
	if(c>='a' && c<='h')return false;
	else return true;
}
bool digi(char c){
	if(c>='1' && c<='8')return false;
	else return true;
}
int main(){
	int t;
	cin>>t;
	getchar();
	while(t--){
		string s;
		getline(cin,s);
		int i;
		int len=s.size(),flag=0,err=0;
		if(small(s[0]) || small(s[3]) || digi(s[1]) || digi(s[4]) || s[2]!='-' || len!=5){
		cout<<"Error"<<endl;
		err=1;
	}
		else{
			if(s[0]+1==s[3] && (s[1]+2==s[4] || s[1]-2==s[4]))flag=1;
			else if(s[0]+2==s[3] && (s[1]+1==s[4] || s[1]-1==s[4]))flag=1;
			else if(s[0]-1==s[3] && (s[1]+2==s[4] || s[1]-2==s[4]))flag=1;
			else if(s[0]-2==s[3] && (s[1]+1==s[4] || s[1]-1==s[4]))flag=1;
		}
		if(flag)cout<<"Yes"<<endl;
		else if(err==0) cout<<"No"<<endl;
	}
}
